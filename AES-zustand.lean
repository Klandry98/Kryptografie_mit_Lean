-- Ein Byte als 8-Bit-Wert
-- Korrektur: In Lean 4 heißt der Typ 'UInt8' (großes 'I')
abbrev Byte := UInt8

-- AES-State: 4x4 Matrix von Bytes
-- Dies nutzt den Standard-Vektortyp aus Init.Data.Vector
def State := Vector (Vector Byte 4) 4

-- Zugriff auf ein Element: Zeile i, Spalte j
-- Fin 4 garantiert: 0 ≤ i < 4 und 0 ≤ j < 4
def State.get (s : State) (i j : Fin 4) : Byte :=
  (s.get i).get j
