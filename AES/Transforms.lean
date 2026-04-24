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
  #[s[0]![i]!, s[1]![i]!, s[2]![i]!, s[3]![i]!]

def stateFromRows (r0 r1 r2 r3 : Array Byte) : State :=
  #[
    #[r0[0]!, r1[0]!, r2[0]!, r3[0]!],
    #[r0[1]!, r1[1]!, r2[1]!, r3[1]!],
    #[r0[2]!, r1[2]!, r2[2]!, r3[2]!],
    #[r0[3]!, r1[3]!, r2[3]!, r3[3]!]
  ]

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
def gfMul (a b : Byte) : Byte := Id.run do
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
  return result

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
