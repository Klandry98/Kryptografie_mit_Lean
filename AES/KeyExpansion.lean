
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
def expandKey (key : Block) : KeySchedule :=
  let initWords : Array (Array Byte) :=
    Array.ofFn (n := 4) fun i => extractWord key i.val
  let words : Array (Array Byte) :=
    (List.range 40).foldl (fun ws i =>
      let j    := i + 4
      let prev := ws[j - 1]!
      let back := ws[j - 4]!
      let w    :=
        if j % 4 == 0 then
          xorWord (xorWord back (subWord (rotWord prev)))
                  #[rcon[j / 4 - 1]!, 0, 0, 0]
        else
          xorWord back prev
      ws.push w) initWords
  Array.ofFn (n := 11) fun r =>
    let i := 4 * r.val
    words[i]! ++ words[i + 1]! ++ words[i + 2]! ++ words[i + 3]!
