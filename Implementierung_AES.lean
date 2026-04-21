-- Definition der zusammengesetzten Typen
abbrev word := Vertor Byte 4   -- 32 Bit
abbrev Block := Vector Byte 16 -- 128 Bit
abbrev Roundkey := Vector Byte word 4  --128 Bit
abbrev KeySchedule := Vector Roundkey 11 -- 11 Rundenschlüssel

-- State-Typ und Konvertierungsfunktionen

abbrev State := Vector ( Vector Byte 4) 4

-- Block (16 Bytes linear ) -> State (4 x4 spaltenweise )

def blockToState ( b : Block ) : State :=
 Vector . ofFn fun j = > Vector . ofFn fun i = > b . get ( i + 4 * j )

-- State (4x4 ) -> Block (16 Bytes linear )def stateToBlock ( s : State ) : Block :=

def stateToBlock ( s : State ) : Block := Vector . ofFn fun k = >
  let j := k / 4
  let i := k % 4 ( s . get j ) . get i

-- S - Box : 256 vorberechnete Substitutionswerte
def sbox : Array Byte := #[
 0x63 , 0 x7c , 0 x77 , 0 x7b , 0 xf2 , 0 x6b , 0 x6f , 0 xc5 ,
 0x30 , 0 x01 , 0 x67 , 0 x2b , 0 xfe , 0 xd7 , 0 xab , 0 x76 ,
-- ... ( vollstaendige Tabelle : 256 Eintraege , siehe Anhang )
 0x8c , 0 xa1 , 0 x89 , 0 x0d , 0 xbf , 0 xe6 , 0 x42 , 0x68 ,
 0x41 , 0 x99 , 0 x2d , 0 x0f , 0 xb0 , 0 x54 , 0 xbb , 0x16
]

-- Einzelnes Byte substituieren
def subByte ( b : Byte ) : Byte := sbox . get ! b . toNat

-- SubBytes auf den gesamten State anwenden
def subBytes ( s : State ) : State := s . map ( fun row = > row . map subByte )

 -- Zyklische Linksverschiebung um n Positionen
def rotateLeft ( row : Vector Byte 4) ( n : Nat ) : Vector Byte 4 := Vector . ofFn fun i = > row . get (( i + n ) % 4)

-- ShiftRows : Zeile i um i Positionen verschieben
def shiftRows ( s : State ) : State :=
 let row0 := getRow s 0
 let row1 := rotateLeft ( getRow s 1) 1
 let row2 := rotateLeft ( getRow s 2) 2
 let row3 := rotateLeft ( getRow s 3) 3
 stateFromRows row0 row1 row2 row3

-- Multiplikation mit 0 x02 in GF (2^8) :
-- Linksshift , bei Ueberlauf Reduktion mit m ( x ) = 0 x1b
def xtime ( b : Byte ) : Byte :=
 let shifted := b <<< 1
 if b &&& 0 x80 != 0 then shifted ^^^ 0 x1b
 else shifted

-- Allgemeine Multiplikation in GF (2^8) ( Shift - and - Add )
def gfMul ( a b : Byte ) : Byte :=
 let p0 := if b &&& 0 x01 != 0 then a else 0
 let a1 := xtime a
 let p1 := if b &&& 0 x02 != 0 then a1 else 0
 let a2 := xtime a1
 let p2 := if b &&& 0 x04 != 0 then a2 else 0
 let a3 := xtime a2
 let p3 := if b &&& 0 x08 != 0 then a3 else 0
 p0 ^^^ p1 ^^^ p2 ^^^ p3

-- Eine Spalte mischen ( Matrixmultiplikation )
def mixColumn ( col : Vector Byte 4) : Vector Byte 4 :=
 let s0 := col . get 0; let s1 := col . get 1
 let s2 := col . get 2; let s3 := col . get 3
 Vector . ofFn fun i = > match i with
 | 0 = > gfMul 0 x02 s0 ^^^ gfMul 0 x03 s1 ^^^ s2 ^^^ s3
 | 1 = > s0 ^^^ gfMul 0 x02 s1 ^^^ gfMul 0 x03 s2 ^^^ s3
 | 2 = > s0 ^^^ s1 ^^^ gfMul 0 x02 s2 ^^^ gfMul 0 x03 s3
 | 3 = > gfMul 0 x03 s0 ^^^ s1 ^^^ s2 ^^^ gfMul 0 x02 s3

-- MixColumns auf alle Spalten anwenden
def mixColumns ( s : State ) : State := s . map mixColumn

-- AddRoundKey : XOR mit dem Rundenschluessel
def addRoundKey ( s : State ) ( rk : RoundKey ) : State :=
 Vector . ofFn fun j = >
 Vector . ofFn fun i = >
 ( s . get j ) . get i ^^^ ( rk . get j ) . get i

 -- Zyklische Verschiebung eines Wortes um 1 Byte
def rotWord ( w : Word ) : Word :=
 # v [ w . get 1 , w . get 2 , w . get 3 , w . get 0]
-- S - Box - Substitution auf ein Wort
def subWord ( w : Word ) : Word := w . map subByte

-- Rundenkonstanten ( Potenzen von x in GF (2^8) )
def rcon : Array Byte := #[
 0 x01 , 0 x02 , 0 x04 , 0 x08 , 0 x10 ,
 0 x20 , 0 x40 , 0 x80 , 0 x1b , 0 x36
]

-- XOR zweier Woerter
def xorWord ( a b : Word ) : Word :=
 Vector . ofFn fun i = > ( a . get i ) ^^^ ( b . get i )

-- g - Funktion : RotWord -> SubWord -> XOR Rcon
def gFunc ( w : Word ) ( round : Nat ) : Word :=
 let rotated := rotWord w
 let substituted := subWord rotated
 let rc : Word := # v [ rcon . get ! round , 0 , 0 , 0]
 xorWord substituted rc

def expandKey ( key : Block ) : KeySchedule :=
 -- Initiale 4 Woerter aus dem Schluessel
 let w : Array Word := Array . ofFn fun i = > # v [ key . get (4* i ) , key . get (4* i +1) ,
   key . get (4* i +2) , key . get (4* i +3) ]

 -- 40 weitere Woerter ableiten
 let w := ( List . range 40) . foldl ( fun ws idx = >
  let i := idx + 4
  let prev := ws . get ! ( i - 1)
  let back := ws . get ! ( i - 4)
  let newWord :=
   if i % 4 == 0
  then xorWord back ( gFunc prev ( i / 4 - 1) )
    else xorWord back prev ws . push newWord ) w

   -- 44 Woerter in 11 Rundenschluessel gruppieren
   Vector . ofFn fun r = >
    Vector . ofFn fun c = > w . get ! (4 * r + c )

-- Eine vollstaendige Runde ( Runden 1 -9)
def aesRound ( s : State ) ( rk : RoundKey ) : State := addRoundKey ( mixColumns ( shiftRows ( subBytes s ) ) ) rk

-- Letzte Runde ( ohne MixColumns )
def aesFinalRound ( s : State ) ( rk : RoundKey ) : State :=
 addRoundKey ( shiftRows ( subBytes s ) ) rk

-- AES -128 Verschluesselung
def cipher ( input : Block ) ( ks : KeySchedule ) : Block :=
 let s := blockToState input
 let s := addRoundKey s ( ks . get 0) -- Initiale Key
  Addition
 let s := List . range 9 | >. foldl -- Runden 1 -9
  ( fun s i = > aesRound s ( ks . get ( i + 1) ) ) s
 let s := aesFinalRound s ( ks . get 10) -- Runde 10
 stateToBlock s

-- Oeffentliche API
def aesEncrypt ( plaintext key : Block ) : Block := cipher plaintext ( expandKey key )

-- Inverse Runde
def invAesRound ( s : State ) ( rk : RoundKey ) : State := invMixColumns ( addRoundKey ( invSubBytes ( invShiftRows s ) ) rk )

-- Inverse letzte Runde
def invAesFinalRound ( s : State ) ( rk : RoundKey ) : State := addRoundKey ( invSubBytes ( invShiftRows s ) ) rk

-- AES -128 Entschluesselung
def invCipher ( input : Block ) ( ks : KeySchedule ) : Block :=
 let s := blockToState input
 let s := addRoundKey s ( ks . get 10)
 let s := List . range 9 | >. foldl
  ( fun s i = > invAesRound s ( ks . get (9 - i ) ) ) s
 let s := invAesFinalRound s ( ks . get 0)
 stateToBlock s

def aesDecrypt ( ciphertext key : Block ) : Block := invCipher ciphertext ( expandKey key )
