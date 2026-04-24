#!/bin/bash
# =============================================================================
# AES-128 Lean 4 Projekt — Vollständiges Setup für Ubuntu 24.04
# Landry Kamdoum Tedjouka — Bachelorarbeit "Kryptografie mit Lean"
# =============================================================================
# Verwendung:
#   chmod +x aes_lean_setup.sh
#   ./aes_lean_setup.sh
# =============================================================================

set -e  # Bei Fehler sofort abbrechen

echo "============================================"
echo "  SCHRITT 1: Lean 4 Toolchain installieren"
echo "============================================"

# 1a. elan installieren (Lean Version Manager)
if command -v elan &> /dev/null; then
    echo "[OK] elan ist bereits installiert: $(elan --version)"
else
    echo "[...] Installiere elan..."
    curl -sSf https://raw.githubusercontent.com/leanprover/elan/master/elan-init.sh | sh -s -- -y
    # PATH aktualisieren für diese Session
    export PATH="$HOME/.elan/bin:$PATH"
    echo 'export PATH="$HOME/.elan/bin:$PATH"' >> ~/.bashrc
    echo "[OK] elan installiert: $(elan --version)"
fi

# 1b. Prüfe ob lean und lake verfügbar sind
echo "[...] Prüfe Lean-Installation..."
lean --version
lake --version
echo "[OK] Lean 4 Toolchain bereit."

echo ""
echo "============================================"
echo "  SCHRITT 2: Projekt erstellen"
echo "============================================"

# 2a. Projektverzeichnis erstellen
PROJECT_DIR="$HOME/aes_lean"
if [ -d "$PROJECT_DIR" ]; then
    echo "[!] Verzeichnis $PROJECT_DIR existiert bereits."
    echo "    Lösche und erstelle neu? (j/n)"
    read -r answer
    if [ "$answer" = "j" ]; then
        rm -rf "$PROJECT_DIR"
    else
        echo "Abbruch."
        exit 1
    fi
fi

echo "[...] Erstelle Projekt in $PROJECT_DIR..."
mkdir -p "$PROJECT_DIR"
cd "$PROJECT_DIR"

# 2b. Lake-Projekt initialisieren
lake init aes_lean
cd aes_lean

echo "[OK] Projekt erstellt."

echo ""
echo "============================================"
echo "  SCHRITT 3: Dateistruktur anlegen"
echo "============================================"

# 3a. AES-Modulverzeichnis erstellen
mkdir -p AES

echo "[...] Erstelle Lean-Dateien..."

# ─────────────────────────────────────────────────
# AES/Types.lean — Grundlegende Datentypen
# ─────────────────────────────────────────────────
cat > AES/Types.lean << 'LEAN_EOF'
/-
  AES/Types.lean
  Grundlegende Datentypen für AES-128
  Bachelorarbeit: Kryptografie mit Lean
-/

-- Byte: 8-Bit-Wert
abbrev Byte := UInt8

-- Word: 4 Bytes (32 Bit)
def Word := Array Byte
deriving Repr, BEq

-- Block: 16 Bytes (128 Bit)
def Block := Array Byte
deriving Repr, BEq

-- State: 4x4-Matrix von Bytes (spaltenweise)
def State := Array (Array Byte)
deriving Repr, BEq

-- RoundKey: 16 Bytes
abbrev RoundKey := Block

-- KeySchedule: 11 Rundenschlüssel
def KeySchedule := Array RoundKey
deriving Repr

-- Hilfsfunktionen: Konvertierung Block <-> State

/-- Block (16 Bytes linear) -> State (4x4 spaltenweise) -/
def blockToState (b : Block) : State :=
  let arr := b
  #[
    #[arr[0]!, arr[1]!, arr[2]!, arr[3]!],
    #[arr[4]!, arr[5]!, arr[6]!, arr[7]!],
    #[arr[8]!, arr[9]!, arr[10]!, arr[11]!],
    #[arr[12]!, arr[13]!, arr[14]!, arr[15]!]
  ]

/-- State (4x4) -> Block (16 Bytes linear) -/
def stateToBlock (s : State) : Block :=
  let col0 := s[0]!
  let col1 := s[1]!
  let col2 := s[2]!
  let col3 := s[3]!
  #[col0[0]!, col0[1]!, col0[2]!, col0[3]!,
    col1[0]!, col1[1]!, col1[2]!, col1[3]!,
    col2[0]!, col2[1]!, col2[2]!, col2[3]!,
    col3[0]!, col3[1]!, col3[2]!, col3[3]!]

/-- Hex-String zu Block konvertieren -/
def hexCharToNibble (c : Char) : UInt8 :=
  if '0' ≤ c && c ≤ '9' then c.toNat.toUInt8 - 48
  else if 'a' ≤ c && c ≤ 'f' then c.toNat.toUInt8 - 87
  else if 'A' ≤ c && c ≤ 'F' then c.toNat.toUInt8 - 55
  else 0

def hexToBlock (s : String) : Block :=
  let chars := s.toList
  let rec go (cs : List Char) (acc : Array Byte) : Array Byte :=
    match cs with
    | hi :: lo :: rest =>
      let byte := (hexCharToNibble hi) <<< 4 ||| (hexCharToNibble lo)
      go rest (acc.push byte)
    | _ => acc
  go chars #[]

/-- Block zu Hex-String konvertieren -/
def byteToHex (b : UInt8) : String :=
  let hi := b >>> 4
  let lo := b &&& 0x0f
  let toChar (n : UInt8) : Char :=
    if n < 10 then Char.ofNat (n.toNat + 48)
    else Char.ofNat (n.toNat + 87)
  String.mk [toChar hi, toChar lo]

def blockToHex (b : Block) : String :=
  b.foldl (fun acc byte => acc ++ byteToHex byte) ""
LEAN_EOF

# ─────────────────────────────────────────────────
# AES/SBox.lean — S-Box und inverse S-Box
# ─────────────────────────────────────────────────
cat > AES/SBox.lean << 'LEAN_EOF'
/-
  AES/SBox.lean
  S-Box und inverse S-Box (Lookup-Tabellen)
-/
import AES.Types

/-- AES S-Box: 256 vorberechnete Substitutionswerte -/
def sbox : Array Byte := #[
  0x63, 0x7c, 0x77, 0x7b, 0xf2, 0x6b, 0x6f, 0xc5,
  0x30, 0x01, 0x67, 0x2b, 0xfe, 0xd7, 0xab, 0x76,
  0xca, 0x82, 0xc9, 0x7d, 0xfa, 0x59, 0x47, 0xf0,
  0xad, 0xd4, 0xa2, 0xaf, 0x9c, 0xa4, 0x72, 0xc0,
  0xb7, 0xfd, 0x93, 0x26, 0x36, 0x3f, 0xf7, 0xcc,
  0x34, 0xa5, 0xe5, 0xf1, 0x71, 0xd8, 0x31, 0x15,
  0x04, 0xc7, 0x23, 0xc3, 0x18, 0x96, 0x05, 0x9a,
  0x07, 0x12, 0x80, 0xe2, 0xeb, 0x27, 0xb2, 0x75,
  0x09, 0x83, 0x2c, 0x1a, 0x1b, 0x6e, 0x5a, 0xa0,
  0x52, 0x3b, 0xd6, 0xb3, 0x29, 0xe3, 0x2f, 0x84,
  0x53, 0xd1, 0x00, 0xed, 0x20, 0xfc, 0xb1, 0x5b,
  0x6a, 0xcb, 0xbe, 0x39, 0x4a, 0x4c, 0x58, 0xcf,
  0xd0, 0xef, 0xaa, 0xfb, 0x43, 0x4d, 0x33, 0x85,
  0x45, 0xf9, 0x02, 0x7f, 0x50, 0x3c, 0x9f, 0xa8,
  0x51, 0xa3, 0x40, 0x8f, 0x92, 0x9d, 0x38, 0xf5,
  0xbc, 0xb6, 0xda, 0x21, 0x10, 0xff, 0xf3, 0xd2,
  0xcd, 0x0c, 0x13, 0xec, 0x5f, 0x97, 0x44, 0x17,
  0xc4, 0xa7, 0x7e, 0x3d, 0x64, 0x5d, 0x19, 0x73,
  0x60, 0x81, 0x4f, 0xdc, 0x22, 0x2a, 0x90, 0x88,
  0x46, 0xee, 0xb8, 0x14, 0xde, 0x5e, 0x0b, 0xdb,
  0xe0, 0x32, 0x3a, 0x0a, 0x49, 0x06, 0x24, 0x5c,
  0xc2, 0xd3, 0xac, 0x62, 0x91, 0x95, 0xe4, 0x79,
  0xe7, 0xc8, 0x37, 0x6d, 0x8d, 0xd5, 0x4e, 0xa9,
  0x6c, 0x56, 0xf4, 0xea, 0x65, 0x7a, 0xae, 0x08,
  0xba, 0x78, 0x25, 0x2e, 0x1c, 0xa6, 0xb4, 0xc6,
  0xe8, 0xdd, 0x74, 0x1f, 0x4b, 0xbd, 0x8b, 0x8a,
  0x70, 0x3e, 0xb5, 0x66, 0x48, 0x03, 0xf6, 0x0e,
  0x61, 0x35, 0x57, 0xb9, 0x86, 0xc1, 0x1d, 0x9e,
  0xe1, 0xf8, 0x98, 0x11, 0x69, 0xd9, 0x8e, 0x94,
  0x9b, 0x1e, 0x87, 0xe9, 0xce, 0x55, 0x28, 0xdf,
  0x8c, 0xa1, 0x89, 0x0d, 0xbf, 0xe6, 0x42, 0x68,
  0x41, 0x99, 0x2d, 0x0f, 0xb0, 0x54, 0xbb, 0x16
]

/-- AES inverse S-Box -/
def invSbox : Array Byte := #[
  0x52, 0x09, 0x6a, 0xd5, 0x30, 0x36, 0xa5, 0x38,
  0xbf, 0x40, 0xa3, 0x9e, 0x81, 0xf3, 0xd7, 0xfb,
  0x7c, 0xe3, 0x39, 0x82, 0x9b, 0x2f, 0xff, 0x87,
  0x34, 0x8e, 0x43, 0x44, 0xc4, 0xde, 0xe9, 0xcb,
  0x54, 0x7b, 0x94, 0x32, 0xa6, 0xc2, 0x23, 0x3d,
  0xee, 0x4c, 0x95, 0x0b, 0x42, 0xfa, 0xc3, 0x4e,
  0x08, 0x2e, 0xa1, 0x66, 0x28, 0xd9, 0x24, 0xb2,
  0x76, 0x5b, 0xa2, 0x49, 0x6d, 0x8b, 0xd1, 0x25,
  0x72, 0xf8, 0xf6, 0x64, 0x86, 0x68, 0x98, 0x16,
  0xd4, 0xa4, 0x5c, 0xcc, 0x5d, 0x65, 0xb6, 0x92,
  0x6c, 0x70, 0x48, 0x50, 0xfd, 0xed, 0xb9, 0xda,
  0x5e, 0x15, 0x46, 0x57, 0xa7, 0x8d, 0x9d, 0x84,
  0x90, 0xd8, 0xab, 0x00, 0x8c, 0xbc, 0xd3, 0x0a,
  0xf7, 0xe4, 0x58, 0x05, 0xb8, 0xb3, 0x45, 0x06,
  0xd0, 0x2c, 0x1e, 0x8f, 0xca, 0x3f, 0x0f, 0x02,
  0xc1, 0xaf, 0xbd, 0x03, 0x01, 0x13, 0x8a, 0x6b,
  0x3a, 0x91, 0x11, 0x41, 0x4f, 0x67, 0xdc, 0xea,
  0x97, 0xf2, 0xcf, 0xce, 0xf0, 0xb4, 0xe6, 0x73,
  0x96, 0xac, 0x74, 0x22, 0xe7, 0xad, 0x35, 0x85,
  0xe2, 0xf9, 0x37, 0xe8, 0x1c, 0x75, 0xdf, 0x6e,
  0x47, 0xf1, 0x1a, 0x71, 0x1d, 0x29, 0xc5, 0x89,
  0x6f, 0xb7, 0x62, 0x0e, 0xaa, 0x18, 0xbe, 0x1b,
  0xfc, 0x56, 0x3e, 0x4b, 0xc6, 0xd2, 0x79, 0x20,
  0x9a, 0xdb, 0xc0, 0xfe, 0x78, 0xcd, 0x5a, 0xf4,
  0x1f, 0xdd, 0xa8, 0x33, 0x88, 0x07, 0xc7, 0x31,
  0xb1, 0x12, 0x10, 0x59, 0x27, 0x80, 0xec, 0x5f,
  0x60, 0x51, 0x7f, 0xa9, 0x19, 0xb5, 0x4a, 0x0d,
  0x2d, 0xe5, 0x7a, 0x9f, 0x93, 0xc9, 0x9c, 0xef,
  0xa0, 0xe0, 0x3b, 0x4d, 0xae, 0x2a, 0xf5, 0xb0,
  0xc8, 0xeb, 0xbb, 0x3c, 0x83, 0x53, 0x99, 0x61,
  0x17, 0x2b, 0x04, 0x7e, 0xba, 0x77, 0xd6, 0x26,
  0xe1, 0x69, 0x14, 0x63, 0x55, 0x21, 0x0c, 0x7d
]

/-- Einzelnes Byte substituieren -/
def subByte (b : Byte) : Byte :=
  sbox[b.toNat]!

/-- Inverses SubByte -/
def invSubByte (b : Byte) : Byte :=
  invSbox[b.toNat]!
LEAN_EOF

# ─────────────────────────────────────────────────
# AES/Transforms.lean — Rundentransformationen
# ─────────────────────────────────────────────────
cat > AES/Transforms.lean << 'LEAN_EOF'
/-
  AES/Transforms.lean
  Die vier AES-Rundentransformationen:
  SubBytes, ShiftRows, MixColumns, AddRoundKey
-/
import AES.Types
import AES.SBox

-- ═══════════════════════════════════════════════
-- SubBytes / InvSubBytes
-- ═══════════════════════════════════════════════

/-- SubBytes: Jedes Byte durch S-Box ersetzen -/
def subBytes (s : State) : State :=
  s.map (fun col => col.map subByte)

/-- InvSubBytes: Jedes Byte durch inverse S-Box ersetzen -/
def invSubBytes (s : State) : State :=
  s.map (fun col => col.map invSubByte)

-- ═══════════════════════════════════════════════
-- ShiftRows / InvShiftRows
-- ═══════════════════════════════════════════════

/-- Hilfsfunktion: Zeile i aus State extrahieren -/
def getRow (s : State) (i : Nat) : Array Byte :=
  #[s[0]![i]!, s[1]![i]!, s[2]![i]!, s[3]![i]!]

/-- State aus 4 Zeilen zusammensetzen -/
def stateFromRows (r0 r1 r2 r3 : Array Byte) : State :=
  #[
    #[r0[0]!, r1[0]!, r2[0]!, r3[0]!],
    #[r0[1]!, r1[1]!, r2[1]!, r3[1]!],
    #[r0[2]!, r1[2]!, r2[2]!, r3[2]!],
    #[r0[3]!, r1[3]!, r2[3]!, r3[3]!]
  ]

/-- Zyklische Linksverschiebung -/
def rotateLeft (row : Array Byte) (n : Nat) : Array Byte :=
  Array.ofFn (n := 4) fun i => row[(i.val + n) % 4]!

/-- Zyklische Rechtsverschiebung -/
def rotateRight (row : Array Byte) (n : Nat) : Array Byte :=
  Array.ofFn (n := 4) fun i => row[(i.val + 4 - n) % 4]!

/-- ShiftRows -/
def shiftRows (s : State) : State :=
  let r0 := getRow s 0
  let r1 := rotateLeft (getRow s 1) 1
  let r2 := rotateLeft (getRow s 2) 2
  let r3 := rotateLeft (getRow s 3) 3
  stateFromRows r0 r1 r2 r3

/-- InvShiftRows -/
def invShiftRows (s : State) : State :=
  let r0 := getRow s 0
  let r1 := rotateRight (getRow s 1) 1
  let r2 := rotateRight (getRow s 2) 2
  let r3 := rotateRight (getRow s 3) 3
  stateFromRows r0 r1 r2 r3

-- ═══════════════════════════════════════════════
-- MixColumns / InvMixColumns
-- ═══════════════════════════════════════════════

/-- xtime: Multiplikation mit 0x02 in GF(2^8) -/
def xtime (b : Byte) : Byte :=
  let shifted := b <<< 1
  if b &&& 0x80 != 0 then shifted ^^^ 0x1b
  else shifted

/-- Allgemeine Multiplikation in GF(2^8) -/
def gfMul (a b : Byte) : Byte :=
  let mut result : Byte := 0
  let mut aa := a
  let mut bb := b
  for _ in [:8] do
    if bb &&& 1 != 0 then
      result := result ^^^ aa
    let hiBit := aa &&& 0x80
    aa := aa <<< 1
    if hiBit != 0 then
      aa := aa ^^^ 0x1b
    bb := bb >>> 1
  result

/-- Eine Spalte mischen -/
def mixColumn (col : Array Byte) : Array Byte :=
  let s0 := col[0]!; let s1 := col[1]!
  let s2 := col[2]!; let s3 := col[3]!
  #[
    gfMul 0x02 s0 ^^^ gfMul 0x03 s1 ^^^ s2 ^^^ s3,
    s0 ^^^ gfMul 0x02 s1 ^^^ gfMul 0x03 s2 ^^^ s3,
    s0 ^^^ s1 ^^^ gfMul 0x02 s2 ^^^ gfMul 0x03 s3,
    gfMul 0x03 s0 ^^^ s1 ^^^ s2 ^^^ gfMul 0x02 s3
  ]

/-- Inverse einer Spalte mischen -/
def invMixColumn (col : Array Byte) : Array Byte :=
  let s0 := col[0]!; let s1 := col[1]!
  let s2 := col[2]!; let s3 := col[3]!
  #[
    gfMul 0x0e s0 ^^^ gfMul 0x0b s1 ^^^ gfMul 0x0d s2 ^^^ gfMul 0x09 s3,
    gfMul 0x09 s0 ^^^ gfMul 0x0e s1 ^^^ gfMul 0x0b s2 ^^^ gfMul 0x0d s3,
    gfMul 0x0d s0 ^^^ gfMul 0x09 s1 ^^^ gfMul 0x0e s2 ^^^ gfMul 0x0b s3,
    gfMul 0x0b s0 ^^^ gfMul 0x0d s1 ^^^ gfMul 0x09 s2 ^^^ gfMul 0x0e s3
  ]

/-- MixColumns auf gesamten State -/
def mixColumns (s : State) : State :=
  s.map mixColumn

/-- InvMixColumns auf gesamten State -/
def invMixColumns (s : State) : State :=
  s.map invMixColumn

-- ═══════════════════════════════════════════════
-- AddRoundKey (selbstinvers)
-- ═══════════════════════════════════════════════

/-- AddRoundKey: XOR von State und RoundKey -/
def addRoundKey (s : State) (rk : Block) : State :=
  let rkState := blockToState rk
  Array.ofFn (n := 4) fun j =>
    Array.ofFn (n := 4) fun i =>
      s[j.val]![i.val]! ^^^ rkState[j.val]![i.val]!
LEAN_EOF

# ─────────────────────────────────────────────────
# AES/KeyExpansion.lean — Schlüsselexpansion
# ─────────────────────────────────────────────────
cat > AES/KeyExpansion.lean << 'LEAN_EOF'
/-
  AES/KeyExpansion.lean
  Schlüsselexpansion für AES-128
-/
import AES.Types
import AES.SBox

/-- Rundenkonstanten -/
def rcon : Array Byte := #[
  0x01, 0x02, 0x04, 0x08, 0x10,
  0x20, 0x40, 0x80, 0x1b, 0x36
]

/-- RotWord: Zyklische Verschiebung um 1 Byte -/
def rotWord (w : Array Byte) : Array Byte :=
  #[w[1]!, w[2]!, w[3]!, w[0]!]

/-- SubWord: S-Box auf jedes Byte -/
def subWord (w : Array Byte) : Array Byte :=
  w.map subByte

/-- XOR zweier Wörter -/
def xorWord (a b : Array Byte) : Array Byte :=
  Array.ofFn (n := 4) fun i => a[i.val]! ^^^ b[i.val]!

/-- Wort aus Block extrahieren -/
def extractWord (block : Block) (idx : Nat) : Array Byte :=
  #[block[4*idx]!, block[4*idx+1]!, block[4*idx+2]!, block[4*idx+3]!]

/-- Schlüsselexpansion: 128-Bit Key -> 11 Rundenschlüssel -/
def expandKey (key : Block) : KeySchedule :=
  -- Initiale 4 Wörter
  let mut words : Array (Array Byte) := #[]
  for i in [:4] do
    words := words.push (extractWord key i)
  -- 40 weitere Wörter ableiten
  for i in [4:44] do
    let prev := words[i - 1]!
    let back := words[i - 4]!
    let newWord :=
      if i % 4 == 0 then
        let g := subWord (rotWord prev)
        let rc : Array Byte := #[rcon[i / 4 - 1]!, 0, 0, 0]
        xorWord (xorWord back g) rc
      else
        xorWord back prev
    words := words.push newWord
  -- 44 Wörter in 11 Rundenschlüssel (je 16 Bytes) gruppieren
  let mut schedule : Array Block := #[]
  for r in [:11] do
    let w0 := words[4*r]!
    let w1 := words[4*r+1]!
    let w2 := words[4*r+2]!
    let w3 := words[4*r+3]!
    let rk : Block := w0 ++ w1 ++ w2 ++ w3
    schedule := schedule.push rk
  schedule
LEAN_EOF

# ─────────────────────────────────────────────────
# AES/Cipher.lean — Verschlüsselung & Entschlüsselung
# ─────────────────────────────────────────────────
cat > AES/Cipher.lean << 'LEAN_EOF'
/-
  AES/Cipher.lean
  Vollständige AES-128 Verschlüsselung und Entschlüsselung
-/
import AES.Types
import AES.Transforms
import AES.KeyExpansion

/-- Eine vollständige Runde (Runden 1-9) -/
def aesRound (s : State) (rk : RoundKey) : State :=
  addRoundKey (mixColumns (shiftRows (subBytes s))) rk

/-- Letzte Runde (ohne MixColumns) -/
def aesFinalRound (s : State) (rk : RoundKey) : State :=
  addRoundKey (shiftRows (subBytes s)) rk

/-- Inverse Runde -/
def invAesRound (s : State) (rk : RoundKey) : State :=
  invMixColumns (addRoundKey (invSubBytes (invShiftRows s)) rk)

/-- Inverse letzte Runde -/
def invAesFinalRound (s : State) (rk : RoundKey) : State :=
  addRoundKey (invSubBytes (invShiftRows s)) rk

/-- AES-128 Verschlüsselung -/
def cipher (input : Block) (ks : KeySchedule) : Block :=
  let mut s := blockToState input
  -- Initiale Key Addition
  s := addRoundKey s ks[0]!
  -- Runden 1-9
  for i in [1:10] do
    s := aesRound s ks[i]!
  -- Letzte Runde (ohne MixColumns)
  s := aesFinalRound s ks[10]!
  stateToBlock s

/-- AES-128 Entschlüsselung -/
def invCipher (input : Block) (ks : KeySchedule) : Block :=
  let mut s := blockToState input
  s := addRoundKey s ks[10]!
  for i in [1:10] do
    s := invAesRound s ks[10 - i]!
  s := invAesFinalRound s ks[0]!
  stateToBlock s

/-- Öffentliche API: Verschlüsselung -/
def aesEncrypt (plaintext key : Block) : Block :=
  let ks := expandKey key
  cipher plaintext ks

/-- Öffentliche API: Entschlüsselung -/
def aesDecrypt (ciphertext key : Block) : Block :=
  let ks := expandKey key
  invCipher ciphertext ks
LEAN_EOF

# ─────────────────────────────────────────────────
# Main.lean — Smoke-Test + AESAVS-Tests
# ─────────────────────────────────────────────────
cat > Main.lean << 'LEAN_EOF'
/-
  Main.lean
  Smoke-Tests und AESAVS-Validierung
-/
import AES.Cipher

/-- NIST AESAVS GFSbox Test Vector #1 -/
def test_gfsbox_1 : IO Unit := do
  let key := hexToBlock "00000000000000000000000000000000"
  let pt  := hexToBlock "f34481ec3cc627bacd5dc3fb08f273e6"
  let expected_ct := hexToBlock "0336763e966d92595a567cc9ce537f5e"

  let ct := aesEncrypt pt key
  let result := blockToHex ct

  IO.println s!"Key:       00000000000000000000000000000000"
  IO.println s!"Plaintext: f34481ec3cc627bacd5dc3fb08f273e6"
  IO.println s!"Expected:  0336763e966d92595a567cc9ce537f5e"
  IO.println s!"Got:       {result}"
  IO.println s!"Match:     {ct == expected_ct}"

/-- NIST Appendix B Testvektor (FIPS 197) -/
def test_fips197 : IO Unit := do
  let key := hexToBlock "2b7e151628aed2a6abf7158809cf4f3c"
  let pt  := hexToBlock "3243f6a8885a308d313198a2e0370734"
  let expected_ct := hexToBlock "3925841d02dc09fbdc118597196a0b32"

  let ct := aesEncrypt pt key
  let result := blockToHex ct

  IO.println s!""
  IO.println s!"=== FIPS 197 Appendix B ==="
  IO.println s!"Key:       2b7e151628aed2a6abf7158809cf4f3c"
  IO.println s!"Plaintext: 3243f6a8885a308d313198a2e0370734"
  IO.println s!"Expected:  3925841d02dc09fbdc118597196a0b32"
  IO.println s!"Got:       {result}"
  IO.println s!"Match:     {ct == expected_ct}"

/-- Roundtrip-Test: encrypt dann decrypt -/
def test_roundtrip : IO Unit := do
  let key := hexToBlock "2b7e151628aed2a6abf7158809cf4f3c"
  let pt  := hexToBlock "3243f6a8885a308d313198a2e0370734"

  let ct := aesEncrypt pt key
  let pt2 := aesDecrypt ct key

  IO.println s!""
  IO.println s!"=== Roundtrip Test ==="
  IO.println s!"Original:  {blockToHex pt}"
  IO.println s!"Encrypted: {blockToHex ct}"
  IO.println s!"Decrypted: {blockToHex pt2}"
  IO.println s!"Match:     {pt == pt2}"

def main : IO Unit := do
  IO.println "=== AES-128 Lean 4 — AESAVS Validation ==="
  IO.println ""
  IO.println "=== GFSbox Test #1 ==="
  test_gfsbox_1
  test_fips197
  test_roundtrip
  IO.println ""
  IO.println "=== Done ==="
LEAN_EOF

echo "[OK] Alle Lean-Dateien erstellt."

echo ""
echo "============================================"
echo "  SCHRITT 4: lakefile.lean anpassen"
echo "============================================"

# Lakefile überschreiben mit korrekter Konfiguration
cat > lakefile.lean << 'LEAN_EOF'
import Lake
open Lake DSL

package aes_lean where
  leanOptions := #[
    ⟨`autoImplicit, false⟩
  ]

@[default_target]
lean_lib AES where
  srcDir := "."
  roots := #[`AES.Types, `AES.SBox, `AES.Transforms, `AES.KeyExpansion, `AES.Cipher]

lean_exe aes_main where
  root := `Main
LEAN_EOF

echo "[OK] lakefile.lean konfiguriert."

echo ""
echo "============================================"
echo "  SCHRITT 5: Erster Build"
echo "============================================"

echo "[...] Starte lake build..."
lake build

echo ""
echo "============================================"
echo "  SCHRITT 6: Tests ausführen"
echo "============================================"

echo "[...] Starte AES-Tests..."
lake exe aes_main

echo ""
echo "============================================"
echo "  FERTIG!"
echo "============================================"
echo ""
echo "Projektstruktur:"
echo "  $PROJECT_DIR/aes_lean/"
echo "    ├── lakefile.lean"
echo "    ├── Main.lean"
echo "    └── AES/"
echo "        ├── Types.lean"
echo "        ├── SBox.lean"
echo "        ├── Transforms.lean"
echo "        ├── KeyExpansion.lean"
echo "        └── Cipher.lean"
echo ""
echo "Nächste Schritte:"
echo "  1. Falls Compilerfehler: lake build und Fehler iterativ fixen"
echo "  2. Weitere AESAVS-Testvektoren in Main.lean ergänzen"
echo "  3. Formale Beweise in AES/Proofs.lean schreiben"
echo "  4. Benchmarks mit: time lake exe aes_main"