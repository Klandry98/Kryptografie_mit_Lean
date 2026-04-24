/-
  AES/Types.lean
  Grundlegende Datentypen für AES-128
-/

abbrev Byte := UInt8
abbrev Word := Array Byte
abbrev Block := Array Byte
abbrev State := Array (Array Byte)
abbrev RoundKey := Block
abbrev KeySchedule := Array RoundKey

/-- Block (16 Bytes linear) -> State (4x4 spaltenweise) -/
def blockToState (b : Block) : State :=
  #[
    #[b[0]!, b[1]!, b[2]!, b[3]!],
    #[b[4]!, b[5]!, b[6]!, b[7]!],
    #[b[8]!, b[9]!, b[10]!, b[11]!],
    #[b[12]!, b[13]!, b[14]!, b[15]!]
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

def hexCharToNibble (c : Char) : UInt8 :=
  if '0' ≤ c && c ≤ '9' then c.toNat.toUInt8 - 48
  else if 'a' ≤ c && c ≤ 'f' then c.toNat.toUInt8 - 87
  else if 'A' ≤ c && c ≤ 'F' then c.toNat.toUInt8 - 55
  else 0

/-- Hex-String zu Block konvertieren -/
def hexToBlock (s : String) : Block :=
  let chars := s.toList
  let rec go : List Char → Array Byte → Array Byte
    | hi :: lo :: rest, acc =>
        let byte := (hexCharToNibble hi) <<< 4 ||| (hexCharToNibble lo)
        go rest (acc.push byte)
    | _, acc => acc
  go chars #[]

def byteToHex (b : UInt8) : String :=
  let hi := b >>> 4
  let lo := b &&& 0x0f
  let toChar (n : UInt8) : Char :=
    if n < 10 then Char.ofNat (n.toNat + 48)
    else Char.ofNat (n.toNat + 87)
  String.ofList [toChar hi, toChar lo]

/-- Block zu Hex-String konvertieren -/
def blockToHex (b : Block) : String :=
  b.foldl (fun acc byte => acc ++ byteToHex byte) ""
