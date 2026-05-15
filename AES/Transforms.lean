/-
  AES/Transforms.lean
  Die vier AES-Rundentransformationen:
  SubBytes, ShiftRows, MixColumns, AddRoundKey
-/
import AES.Types
import AES.SBox

-- SubBytes / InvSubBytes

def subBytes (s : State) : State := s.map (fun col => col.map subByte)
def invSubBytes (s : State) : State := s.map (fun col => col.map invSubByte)

-- ShiftRows / InvShiftRows

def getRow (s : State) (i : Nat) : Array Byte :=
  Array.ofFn (n := 4) fun j => s[j.val]![i]!

def stateFromRows (r0 r1 r2 r3 : Array Byte) : State :=
  let rows := #[r0, r1, r2, r3]
  Array.ofFn (n := 4) fun j =>
    Array.ofFn (n := 4) fun i =>
      rows[i.val]![j.val]!

def rotateLeft (row : Array Byte) (n : Nat) : Array Byte :=
  Array.ofFn (n := 4) fun i => row[(i.val + n) % 4]!

def rotateRight (row : Array Byte) (n : Nat) : Array Byte :=
  Array.ofFn (n := 4) fun i => row[(i.val + 4 - n % 4) % 4]!

def shiftRows (s : State) : State :=
  stateFromRows
    (getRow s 0)
    (rotateLeft (getRow s 1) 1)
    (rotateLeft (getRow s 2) 2)
    (rotateLeft (getRow s 3) 3)

def invShiftRows (s : State) : State :=
  stateFromRows
    (getRow s 0)
    (rotateRight (getRow s 1) 1)
    (rotateRight (getRow s 2) 2)
    (rotateRight (getRow s 3) 3)

-- MixColumns / InvMixColumns

/-- Multiplikation mit 0x02 in GF(2^8) -/
def xtime (b : Byte) : Byte :=
  let shifted := b <<< 1
  if b &&& 0x80 != 0 then shifted ^^^ 0x1b else shifted

/-- Allgemeine Multiplikation in GF(2^8) -/
def gfMul (a b : Byte) : Byte :=
  let step (acc : Byte × Byte × Byte) (_ : Nat) : Byte × Byte × Byte :=
    let (result, aa, bb) := acc
    let result' := if bb &&& 1 != 0 then result ^^^ aa else result
    let hiBit   := aa &&& 0x80
    let aa'     := (aa <<< 1) ^^^ (if hiBit != 0 then 0x1b else 0)
    (result', aa', bb >>> 1)
  let (result, _, _) := (List.range 8).foldl step (0, a, b)
  result

def mixColumn (col : Array Byte) : Array Byte :=
  let s0 := col[0]!; let s1 := col[1]!
  let s2 := col[2]!; let s3 := col[3]!
  #[
    gfMul 0x02 s0 ^^^ gfMul 0x03 s1 ^^^ s2 ^^^ s3,
    s0 ^^^ gfMul 0x02 s1 ^^^ gfMul 0x03 s2 ^^^ s3,
    s0 ^^^ s1 ^^^ gfMul 0x02 s2 ^^^ gfMul 0x03 s3,
    gfMul 0x03 s0 ^^^ s1 ^^^ s2 ^^^ gfMul 0x02 s3
  ]

def invMixColumn (col : Array Byte) : Array Byte :=
  let s0 := col[0]!; let s1 := col[1]!
  let s2 := col[2]!; let s3 := col[3]!
  #[
    gfMul 0x0e s0 ^^^ gfMul 0x0b s1 ^^^ gfMul 0x0d s2 ^^^ gfMul 0x09 s3,
    gfMul 0x09 s0 ^^^ gfMul 0x0e s1 ^^^ gfMul 0x0b s2 ^^^ gfMul 0x0d s3,
    gfMul 0x0d s0 ^^^ gfMul 0x09 s1 ^^^ gfMul 0x0e s2 ^^^ gfMul 0x0b s3,
    gfMul 0x0b s0 ^^^ gfMul 0x0d s1 ^^^ gfMul 0x09 s2 ^^^ gfMul 0x0e s3
  ]

def mixColumns (s : State) : State := s.map mixColumn
def invMixColumns (s : State) : State := s.map invMixColumn

-- AddRoundKey (selbstinvers)

def addRoundKey (s : State) (rk : Block) : State :=
  let rkState := blockToState rk
  Array.ofFn (n := 4) fun j =>
    Array.ofFn (n := 4) fun i =>
      s[j.val]![i.val]! ^^^ rkState[j.val]![i.val]!
