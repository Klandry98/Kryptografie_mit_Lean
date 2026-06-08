/-
  AES/TransformsTest.lean
  Korrektheitstests und formale Beweise für die Transformationen in AES/Transforms.lean.
  Strategie: `native_decide` kompiliert alle Berechnungen nativ und prüft Gleichheit.
-/
import AES.Transforms

-- ============================================================
-- Hilfsdefinitionen
-- ============================================================

-- Typischer 4×4-Testzustand (spaltenweise: 4 Spalten à 4 Bytes)
def exampleState : State := #[
  #[0x00, 0x01, 0x02, 0x03],
  #[0x04, 0x05, 0x06, 0x07],
  #[0x08, 0x09, 0x0a, 0x0b],
  #[0x0c, 0x0d, 0x0e, 0x0f]
]

-- NIST-Testvektoren
def nistState : State := #[
  #[0x19, 0xa0, 0x9a, 0xe9],
  #[0x3d, 0xf4, 0xc6, 0xf8],
  #[0xe3, 0xe2, 0x8d, 0x48],
  #[0xbe, 0x2b, 0x2a, 0x08]
]

def nistKey : Block := #[
  0x2b, 0x7e, 0x15, 0x16,
  0x28, 0xae, 0xd2, 0xa6,
  0xab, 0xf7, 0x15, 0x88,
  0x09, 0xcf, 0x4f, 0x3c
]

-- ============================================================
-- 1. rotateLeft und rotateRight
-- ============================================================

section RotateTests

#eval rotateLeft  #[0x01, 0x02, 0x03, 0x04] 1  -- erwartet: #[0x02, 0x03, 0x04, 0x01]
#eval rotateRight #[0x01, 0x02, 0x03, 0x04] 1  -- erwartet: #[0x04, 0x01, 0x02, 0x03]
#eval rotateLeft  #[0x01, 0x02, 0x03, 0x04] 4  -- erwartet: #[0x01, 0x02, 0x03, 0x04] (Vollrotation)

-- rotateLeft n dann rotateRight n = Identität
example : rotateRight (rotateLeft #[0x01, 0x02, 0x03, 0x04] 1) 1
        = #[0x01, 0x02, 0x03, 0x04] := by native_decide

example : rotateRight (rotateLeft #[0xab, 0xcd, 0xef, 0x12] 2) 2
        = #[0xab, 0xcd, 0xef, 0x12] := by native_decide

example : rotateRight (rotateLeft #[0x11, 0x22, 0x33, 0x44] 3) 3
        = #[0x11, 0x22, 0x33, 0x44] := by native_decide

-- rotateRight n dann rotateLeft n = Identität
example : rotateLeft (rotateRight #[0x01, 0x02, 0x03, 0x04] 1) 1
        = #[0x01, 0x02, 0x03, 0x04] := by native_decide

-- Rotation um 4 ergibt Identität (Vollzyklus)
example : rotateLeft #[0xde, 0xad, 0xbe, 0xef] 4
        = #[0xde, 0xad, 0xbe, 0xef] := by native_decide

example : rotateRight #[0xde, 0xad, 0xbe, 0xef] 4
        = #[0xde, 0xad, 0xbe, 0xef] := by native_decide

end RotateTests

section RowTests

#eval getRow exampleState 0  -- erwartet: #[0x00, 0x04, 0x08, 0x0c]
#eval getRow exampleState 1  -- erwartet: #[0x01, 0x05, 0x09, 0x0d]

-- stateFromRows ∘ getRow rekonstruiert den Zustand
example : stateFromRows
    (getRow exampleState 0)
    (getRow exampleState 1)
    (getRow exampleState 2)
    (getRow exampleState 3)
  = exampleState := by native_decide

end RowTests

section ShiftRowsTests

#eval shiftRows    exampleState
#eval invShiftRows exampleState

-- invShiftRows ist die Inverse von shiftRows
example : invShiftRows (shiftRows exampleState) = exampleState := by native_decide
example : shiftRows (invShiftRows exampleState) = exampleState := by native_decide

-- Auf NIST-Zustand
example : invShiftRows (shiftRows nistState) = nistState := by native_decide
example : shiftRows (invShiftRows nistState) = nistState := by native_decide

end ShiftRowsTests

-- ============================================================
-- 4. xtime: Multiplikation mit 0x02 in GF(2^8)
-- ============================================================

section XtimeTests

-- Bekannte Werte aus dem AES-Standard (FIPS 197, Abschnitt 4.2)
example : xtime 0x57 = 0xae := by native_decide   -- kein Übertrag
example : xtime 0xae = 0x47 := by native_decide   -- mit Reduktion (0x1b)
example : xtime 0x47 = 0x8e := by native_decide   -- kein Übertrag
example : xtime 0x8e = 0x07 := by native_decide   -- mit Reduktion

-- xtime 0x00 = 0x00
example : xtime 0x00 = 0x00 := by native_decide

-- xtime 0x01 = 0x02 (Basisfall)
example : xtime 0x01 = 0x02 := by native_decide

-- xtime 0x80 = 0x1b  (maximaler Übertrag)
example : xtime 0x80 = 0x1b := by native_decide

end XtimeTests

section GfMulTests

-- Bekannte Multiplikation: gfMul 0x02 0x53 = 0xa6 (FIPS 197, Abschnitt 4.2)
example : gfMul 0x02 0x53 = 0xa6 := by native_decide

-- Multiplikation mit 1 ist Identität
example : gfMul 0x01 0x57 = 0x57 := by native_decide
example : gfMul 0x57 0x01 = 0x57 := by native_decide

-- Multiplikation mit 0 ergibt 0
example : gfMul 0x00 0xff = 0x00 := by native_decide
example : gfMul 0xff 0x00 = 0x00 := by native_decide

-- Kommutativität für konkrete Paare
example : gfMul 0x03 0x09 = gfMul 0x09 0x03 := by native_decide
example : gfMul 0x0e 0x0b = gfMul 0x0b 0x0e := by native_decide
example : gfMul 0x57 0x83 = gfMul 0x83 0x57 := by native_decide

-- Distributivität: gfMul a (b XOR c) = gfMul a b XOR gfMul a c
example : gfMul 0x05 (0x03 ^^^ 0x07) = gfMul 0x05 0x03 ^^^ gfMul 0x05 0x07 := by
  native_decide

-- Assoziativität für konkrete Tripel
example : gfMul (gfMul 0x02 0x03) 0x05 = gfMul 0x02 (gfMul 0x03 0x05) := by
  native_decide

-- gfMul stimmt mit xtime überein
example : gfMul 0x02 0x57 = xtime 0x57 := by native_decide
example : gfMul 0x02 0xae = xtime 0xae := by native_decide

-- InvMixColumns-Koeffizienten auf gfMul-Konsistenz prüfen
example : gfMul 0x0e 0x09 = gfMul 0x09 0x0e := by native_decide
example : gfMul 0x0b 0x0d = gfMul 0x0d 0x0b := by native_decide

end GfMulTests

section MixColumnTests

-- Standardtestvektor aus FIPS 197, Abschnitt 4.2.1
example : mixColumn #[0xdb, 0x13, 0x53, 0x45] = #[0x8e, 0x4d, 0xa1, 0xbc] := by
  native_decide

example : mixColumn #[0xf2, 0x0a, 0x22, 0x5c] = #[0x9f, 0xdc, 0x58, 0x9d] := by
  native_decide

-- invMixColumn ist die Inverse von mixColumn
example : invMixColumn (mixColumn #[0xdb, 0x13, 0x53, 0x45])
        = #[0xdb, 0x13, 0x53, 0x45] := by native_decide

example : invMixColumn (mixColumn #[0xf2, 0x0a, 0x22, 0x5c])
        = #[0xf2, 0x0a, 0x22, 0x5c] := by native_decide

example : mixColumn (invMixColumn #[0x8e, 0x4d, 0xa1, 0xbc])
        = #[0x8e, 0x4d, 0xa1, 0xbc] := by native_decide

-- Nullspalte bleibt Null
example : mixColumn #[0x00, 0x00, 0x00, 0x00] = #[0x00, 0x00, 0x00, 0x00] := by
  native_decide

end MixColumnTests

-- ============================================================
-- 7. mixColumns und invMixColumns auf State-Ebene
-- ============================================================

section MixColumnsTests

-- invMixColumns ∘ mixColumns = id
example : invMixColumns (mixColumns exampleState) = exampleState := by native_decide
example : mixColumns (invMixColumns exampleState) = exampleState := by native_decide

-- Auf NIST-Zustand
example : invMixColumns (mixColumns nistState) = nistState := by native_decide

-- Nullzustand bleibt Null
example : mixColumns #[#[0,0,0,0],#[0,0,0,0],#[0,0,0,0],#[0,0,0,0]]
        = #[#[0,0,0,0],#[0,0,0,0],#[0,0,0,0],#[0,0,0,0]] := by native_decide

end MixColumnsTests

-- ============================================================
-- 8. addRoundKey: Selbstinvers (XOR ∘ XOR = id)
-- ============================================================

section AddRoundKeyTests

#eval addRoundKey exampleState nistKey

-- addRoundKey ist selbstinvers: zwei Anwendungen ergeben die Identität
example : addRoundKey (addRoundKey exampleState nistKey) nistKey = exampleState := by
  native_decide

example : addRoundKey (addRoundKey nistState nistKey) nistKey = nistState := by
  native_decide

-- Schlüssel aus Nullen ändert den Zustand nicht
def zeroKey : Block := #[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]

example : addRoundKey exampleState zeroKey = exampleState := by native_decide

-- Zwei verschiedene Schlüssel: (s ⊕ k1) ⊕ k2 = s ⊕ (k1 ⊕ k2) -- prüfen via native_decide
def altKey : Block := #[
  0xff, 0x00, 0xff, 0x00,
  0xff, 0x00, 0xff, 0x00,
  0xff, 0x00, 0xff, 0x00,
  0xff, 0x00, 0xff, 0x00
]

example : addRoundKey (addRoundKey exampleState nistKey) altKey
        = addRoundKey exampleState (Array.ofFn (n := 16) fun i =>
            nistKey[i.val]! ^^^ altKey[i.val]!) := by native_decide

end AddRoundKeyTests

-- ============================================================
-- 9. Kombinierte Invarianten
-- ============================================================

section CombinedTests

-- shiftRows und addRoundKey kommutieren NICHT im Allgemeinen
-- (nur zur Illustration: Gegenbeispiel)
#eval (shiftRows (addRoundKey exampleState nistKey))
#eval (addRoundKey (shiftRows exampleState) nistKey)

-- Aber invShiftRows ∘ shiftRows = id gilt unabhängig vom Schlüssel
example : invShiftRows (shiftRows (addRoundKey exampleState nistKey))
        = addRoundKey exampleState nistKey := by native_decide

-- Drei Transformationen zusammen und ihre Inversen
example :
    let s1 := shiftRows exampleState
    let s2 := mixColumns s1
    let s3 := addRoundKey s2 nistKey
    let s3' := addRoundKey s3 nistKey
    let s2' := invMixColumns s3'
    let s1' := invShiftRows s2'
    s1' = exampleState := by native_decide

end CombinedTests
