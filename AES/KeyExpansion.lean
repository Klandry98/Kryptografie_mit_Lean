
import AES.Types
import AES.SBox

/-- Rundenkonstanten -/
def rcon : Array Byte := #[
  0x01, 0x02, 0x04, 0x08, 0x10,
  0x20, 0x40, 0x80, 0x1b, 0x36
]

def rotWord (w : Array Byte) : Array Byte :=
  #[w[1]!, w[2]!, w[3]!, w[0]!]

def subWord (w : Array Byte) : Array Byte := w.map subByte

def xorWord (a b : Array Byte) : Array Byte :=
  Array.ofFn (n := 4) fun i => a[i.val]! ^^^ b[i.val]!

def extractWord (block : Block) (idx : Nat) : Array Byte :=
  #[block[4*idx]!, block[4*idx+1]!, block[4*idx+2]!, block[4*idx+3]!]

/-- Schlüsselexpansion: 128-Bit Key -> 11 Rundenschlüssel -/
def expandKey (key : Block) : KeySchedule := Id.run do
  let mut words : Array (Array Byte) := #[]
  for i in [:4] do
    words := words.push (extractWord key i)
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
  let mut schedule : Array Block := #[]
  for r in [:11] do
    let w0 := words[4*r]!
    let w1 := words[4*r+1]!
    let w2 := words[4*r+2]!
    let w3 := words[4*r+3]!
    schedule := schedule.push (w0 ++ w1 ++ w2 ++ w3)
  return schedule
