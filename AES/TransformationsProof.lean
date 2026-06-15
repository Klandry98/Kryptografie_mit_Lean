import AES.Types
import AES.SBox
import AES.Transforms
namespace AESProofs

set_option maxRecDepth 300000
set_option maxHeartbeats 1000000

/-- `invT` invertiert `T` unter der Vorbedingung `P`. -/
def IsCorrectInverse {α : Type _} (P : α → Prop) (T invT : α → α) : Prop :=
  ∀ s, P s → invT (T s) = s

-- STUFE A: Byte-/Wort-Ebene
-- STUFE A: Byte-/Wort-Ebene

theorem invSubByte_subByte (b : Byte) : invSubByte (subByte b) = b := by
  rcases b with ⟨v⟩; revert v; decide +native

theorem subByte_invSubByte (b : Byte) : subByte (invSubByte b) = b := by
  rcases b with ⟨v⟩; revert v; decide +native

theorem xtime_eq_gfMul (b : Byte) : xtime b = gfMul 0x02 b := by
  rcases b with ⟨v⟩; revert v; decide +native

theorem gfMul_one_left (a : Byte) : gfMul 0x01 a = a := by
  rcases a with ⟨v⟩; revert v; decide +native

theorem gfMul_one_right (a : Byte) : gfMul a 0x01 = a := by
  rcases a with ⟨v⟩; revert v; decide +native

theorem gfMul_zero_left (a : Byte) : gfMul 0x00 a = 0x00 := by
  rcases a with ⟨v⟩; revert v; decide +native

/-- Kommutativitaet, eingeschraenkt auf die MixColumns-Konstanten (je 256 Faelle). -/
theorem gfMul_comm_const (b : Byte) :
    (gfMul 0x02 b = gfMul b 0x02) ∧
    (gfMul 0x03 b = gfMul b 0x03) ∧
    (gfMul 0x09 b = gfMul b 0x09) ∧
    (gfMul 0x0b b = gfMul b 0x0b) ∧
    (gfMul 0x0d b = gfMul b 0x0d) ∧
    (gfMul 0x0e b = gfMul b 0x0e) := by
  rcases b with ⟨v⟩; revert v; decide +native

/-- Distributivitaet fuer die MixColumns-Konstanten {02,03,09,0b,0d,0e}. -/
theorem gfMul_distrib_const (x y : Byte) :
    (gfMul 0x02 (x ^^^ y) = gfMul 0x02 x ^^^ gfMul 0x02 y) ∧
    (gfMul 0x03 (x ^^^ y) = gfMul 0x03 x ^^^ gfMul 0x03 y) ∧
    (gfMul 0x09 (x ^^^ y) = gfMul 0x09 x ^^^ gfMul 0x09 y) ∧
    (gfMul 0x0b (x ^^^ y) = gfMul 0x0b x ^^^ gfMul 0x0b y) ∧
    (gfMul 0x0d (x ^^^ y) = gfMul 0x0d x ^^^ gfMul 0x0d y) ∧
    (gfMul 0x0e (x ^^^ y) = gfMul 0x0e x ^^^ gfMul 0x0e y) := by
  rcases x with ⟨vx⟩; rcases y with ⟨vy⟩; revert vx vy; decide +native

-- Wir beweisen die 4 Zeilen der Matrix einzeln, um den RAM nicht zu sprengen

theorem invMatrix_row0 :
    (gfMul 0x0e 0x02 ^^^ gfMul 0x0b 0x01 ^^^ gfMul 0x0d 0x01 ^^^ gfMul 0x09 0x03 = 0x01) ∧
    (gfMul 0x0e 0x03 ^^^ gfMul 0x0b 0x02 ^^^ gfMul 0x0d 0x01 ^^^ gfMul 0x09 0x01 = 0x00) ∧
    (gfMul 0x0e 0x01 ^^^ gfMul 0x0b 0x03 ^^^ gfMul 0x0d 0x02 ^^^ gfMul 0x09 0x01 = 0x00) ∧
    (gfMul 0x0e 0x01 ^^^ gfMul 0x0b 0x01 ^^^ gfMul 0x0d 0x03 ^^^ gfMul 0x09 0x02 = 0x00) := by
  decide +native

theorem invMatrix_row1 :
    (gfMul 0x09 0x02 ^^^ gfMul 0x0e 0x01 ^^^ gfMul 0x0b 0x01 ^^^ gfMul 0x0d 0x03 = 0x00) ∧
    (gfMul 0x09 0x03 ^^^ gfMul 0x0e 0x02 ^^^ gfMul 0x0b 0x01 ^^^ gfMul 0x0d 0x01 = 0x01) ∧
    (gfMul 0x09 0x01 ^^^ gfMul 0x0e 0x03 ^^^ gfMul 0x0b 0x02 ^^^ gfMul 0x0d 0x01 = 0x00) ∧
    (gfMul 0x09 0x01 ^^^ gfMul 0x0e 0x01 ^^^ gfMul 0x0b 0x03 ^^^ gfMul 0x0d 0x02 = 0x00) := by
  decide +native

theorem invMatrix_row2 :
    (gfMul 0x0d 0x02 ^^^ gfMul 0x09 0x01 ^^^ gfMul 0x0e 0x01 ^^^ gfMul 0x0b 0x03 = 0x00) ∧
    (gfMul 0x0d 0x03 ^^^ gfMul 0x09 0x02 ^^^ gfMul 0x0e 0x01 ^^^ gfMul 0x0b 0x01 = 0x00) ∧
    (gfMul 0x0d 0x01 ^^^ gfMul 0x09 0x03 ^^^ gfMul 0x0e 0x02 ^^^ gfMul 0x0b 0x01 = 0x01) ∧
    (gfMul 0x0d 0x01 ^^^ gfMul 0x09 0x01 ^^^ gfMul 0x0e 0x03 ^^^ gfMul 0x0b 0x02 = 0x00) := by
  decide +native

theorem invMatrix_row3 :
    (gfMul 0x0b 0x02 ^^^ gfMul 0x0d 0x01 ^^^ gfMul 0x09 0x01 ^^^ gfMul 0x0e 0x03 = 0x00) ∧
    (gfMul 0x0b 0x03 ^^^ gfMul 0x0d 0x02 ^^^ gfMul 0x09 0x01 ^^^ gfMul 0x0e 0x01 = 0x00) ∧
    (gfMul 0x0b 0x01 ^^^ gfMul 0x0d 0x03 ^^^ gfMul 0x09 0x02 ^^^ gfMul 0x0e 0x01 = 0x00) ∧
    (gfMul 0x0b 0x01 ^^^ gfMul 0x0d 0x01 ^^^ gfMul 0x09 0x03 ^^^ gfMul 0x0e 0x02 = 0x01) := by
  decide +native

/-- Das Haupttheorem setzt die 4 bewiesenen Zeilen vollautomatisch zusammen. -/
theorem invMatrix_mul_matrix_eq_id :
    (gfMul 0x0e 0x02 ^^^ gfMul 0x0b 0x01 ^^^ gfMul 0x0d 0x01 ^^^ gfMul 0x09 0x03 = 0x01) ∧
    (gfMul 0x0e 0x03 ^^^ gfMul 0x0b 0x02 ^^^ gfMul 0x0d 0x01 ^^^ gfMul 0x09 0x01 = 0x00) ∧
    (gfMul 0x0e 0x01 ^^^ gfMul 0x0b 0x03 ^^^ gfMul 0x0d 0x02 ^^^ gfMul 0x09 0x01 = 0x00) ∧
    (gfMul 0x0e 0x01 ^^^ gfMul 0x0b 0x01 ^^^ gfMul 0x0d 0x03 ^^^ gfMul 0x09 0x02 = 0x00) ∧
    (gfMul 0x09 0x02 ^^^ gfMul 0x0e 0x01 ^^^ gfMul 0x0b 0x01 ^^^ gfMul 0x0d 0x03 = 0x00) ∧
    (gfMul 0x09 0x03 ^^^ gfMul 0x0e 0x02 ^^^ gfMul 0x0b 0x01 ^^^ gfMul 0x0d 0x01 = 0x01) ∧
    (gfMul 0x09 0x01 ^^^ gfMul 0x0e 0x03 ^^^ gfMul 0x0b 0x02 ^^^ gfMul 0x0d 0x01 = 0x00) ∧
    (gfMul 0x09 0x01 ^^^ gfMul 0x0e 0x01 ^^^ gfMul 0x0b 0x03 ^^^ gfMul 0x0d 0x02 = 0x00) ∧
    (gfMul 0x0d 0x02 ^^^ gfMul 0x09 0x01 ^^^ gfMul 0x0e 0x01 ^^^ gfMul 0x0b 0x03 = 0x00) ∧
    (gfMul 0x0d 0x03 ^^^ gfMul 0x09 0x02 ^^^ gfMul 0x0e 0x01 ^^^ gfMul 0x0b 0x01 = 0x00) ∧
    (gfMul 0x0d 0x01 ^^^ gfMul 0x09 0x03 ^^^ gfMul 0x0e 0x02 ^^^ gfMul 0x0b 0x01 = 0x01) ∧
    (gfMul 0x0d 0x01 ^^^ gfMul 0x09 0x01 ^^^ gfMul 0x0e 0x03 ^^^ gfMul 0x0b 0x02 = 0x00) ∧
    (gfMul 0x0b 0x02 ^^^ gfMul 0x0d 0x01 ^^^ gfMul 0x09 0x01 ^^^ gfMul 0x0e 0x03 = 0x00) ∧
    (gfMul 0x0b 0x03 ^^^ gfMul 0x0d 0x02 ^^^ gfMul 0x09 0x01 ^^^ gfMul 0x0e 0x01 = 0x00) ∧
    (gfMul 0x0b 0x01 ^^^ gfMul 0x0d 0x03 ^^^ gfMul 0x09 0x02 ^^^ gfMul 0x0e 0x01 = 0x00) ∧
    (gfMul 0x0b 0x01 ^^^ gfMul 0x0d 0x01 ^^^ gfMul 0x09 0x03 ^^^ gfMul 0x0e 0x02 = 0x01) := by
  simp only [invMatrix_row0, invMatrix_row1, invMatrix_row2, invMatrix_row3, and_self]

-- XOR-Gesetze (assoc/comm vor xor_xor_cancel, da dort verwendet)

theorem xor_assoc_byte : ∀ a b c : Byte, (a ^^^ b) ^^^ c = a ^^^ (b ^^^ c) := by
  intro a b c
  exact UInt8.xor_assoc a b c        -- sonst: simp [UInt8.xor_assoc]

theorem xor_comm_byte : ∀ a b : Byte, a ^^^ b = b ^^^ a := by
  intro a b
  exact UInt8.xor_comm a b           -- sonst: simp [UInt8.xor_comm]

theorem xor_xor_cancel : ∀ x k : Byte, (x ^^^ k) ^^^ k = x := by
  intro x k
  rw [xor_assoc_byte]
  simp                               -- sonst: rw [UInt8.xor_self, UInt8.xor_zero]

#print axioms invSubByte_subByte
#print axioms invMatrix_mul_matrix_eq_id
#print axioms xor_assoc_byte
-- STUFE B: State-Ebene

-- B.1  SubBytes invertierbar (universell, map-Komposition)

theorem col_subByte_roundtrip (col : Array Byte) :
    (col.map subByte).map invSubByte = col := by
  rw [Array.map_map]
  have hcomp : invSubByte ∘ subByte = id := by
    funext b; exact invSubByte_subByte b
  rw [hcomp, Array.map_id]

theorem invSubBytes_subBytes (s : State) : invSubBytes (subBytes s) = s := by
  unfold invSubBytes subBytes
  rw [Array.map_map]
  have hcomp :
      (fun col => Array.map invSubByte col) ∘ (fun col => Array.map subByte col)
        = (id : Array Byte → Array Byte) := by
    funext col
    simp only [Function.comp_apply, id_eq]
    exact col_subByte_roundtrip col
  rw [hcomp, Array.map_id]

theorem subBytes_correct : IsCorrectInverse (fun _ => True) subBytes invSubBytes := by
  intro s _; exact invSubBytes_subBytes s

-- B.2  Wohlgeformtheit + ShiftRows

/-- s ist ein wohlgeformter 4x4-State. -/
def WellFormed (s : State) : Prop :=
  s.size = 4 ∧ ∀ i : Fin 4, (s[i.val]!).size = 4

/-- Rechtsrotation macht Linksrotation rueckgaengig (Zeile der Laenge 4). -/
theorem rotateRight_rotateLeft (row : Array Byte) (h : row.size = 4) (n : Nat) :
    rotateRight (rotateLeft row n) n = row := by
  dsimp [rotateRight, rotateLeft]
  apply Array.ext
  · rw [Array.size_ofFn]; exact h.symm
  · intro i hi1 hi2
    rw [h] at hi2
    -- Beide ofFn-Ebenen + getElem!-Reduktion. `simp` behandelt die
    -- Index-Abhaengigkeit, an der `rw` mit "motive not type correct" scheitert.
    have hb1 : (i + 4 - n % 4) % 4 < 4 := Nat.mod_lt _ (by decide)
    have hb2 : ((i + 4 - n % 4) % 4 + n) % 4 < 4 := Nat.mod_lt _ (by decide)
    simp only [Array.getElem_ofFn, Array.size_ofFn,
               getElem!_pos, hb1, hb2, h]
    congr 1
    omega

theorem rotateRight_rotateLeft' (row : Array Byte) (h : row.size = 4) (n : Fin 4) :
    rotateRight (rotateLeft row n.val) n.val = row :=
  rotateRight_rotateLeft row h n.val

/-- getElem! auf ofFn (Byte, Groesse 4) bei In-bounds. -/
theorem getElem!_ofFn4 (f : Fin 4 → Byte) (m : Nat) (hm : m < 4) :
    (Array.ofFn (n := 4) f)[m]! = f ⟨m, hm⟩ := by
  rw [getElem!_pos _ _ (by rw [Array.size_ofFn]; exact hm), Array.getElem_ofFn]

/-- getElem! auf ofFn (Array Byte, Groesse 4) bei In-bounds. -/
theorem getElem!_ofFn4' (f : Fin 4 → Array Byte) (m : Nat) (hm : m < 4) :
    (Array.ofFn (n := 4) f)[m]! = f ⟨m, hm⟩ := by
  rw [getElem!_pos _ _ (by rw [Array.size_ofFn]; exact hm), Array.getElem_ofFn]

/-- getRow nach stateFromRows reproduziert die k-te Zeile (k < 4). -/
theorem getRow_stateFromRows (r0 r1 r2 r3 : Array Byte)
    (k : Nat) (hk : k < 4)
    (hrk : (#[r0, r1, r2, r3])[k]!.size = 4) :
    getRow (stateFromRows r0 r1 r2 r3) k = (#[r0, r1, r2, r3])[k]! := by
  dsimp [getRow, stateFromRows]
  apply Array.ext
  · rw [Array.size_ofFn]; exact hrk.symm
  · intro i hi1 hi2
    rw [Array.size_ofFn] at hi1
    rw [Array.getElem_ofFn]
    rw [getElem!_ofFn4' _ i hi1, getElem!_ofFn4 _ k hk]
    rw [getElem!_pos _ _ (by rw [hrk]; exact hi1)]

/-- stateFromRows rekonstruiert s aus seinen vier Zeilen (unter WellFormed). -/
theorem stateFromRows_getRow (s : State) (hs : WellFormed s) :
    stateFromRows (getRow s 0) (getRow s 1) (getRow s 2) (getRow s 3) = s := by
  obtain ⟨hsize, hrows⟩ := hs
  dsimp [stateFromRows, getRow]
  apply Array.ext
  · rw [Array.size_ofFn]; exact hsize.symm
  · intro j hj1 hj2
    rw [hsize] at hj2
    rw [Array.getElem_ofFn]
    apply Array.ext
    · rw [Array.size_ofFn]
      have hb : s[j]! = s[j] := getElem!_pos s j (by rw [hsize]; exact hj2)
      rw [← hb]; exact (hrows ⟨j, hj2⟩).symm
    · intro i hi1 hi2
      rw [Array.size_ofFn] at hi1
      rw [Array.getElem_ofFn]
      match i, hi1 with
      | 0, _ =>
        show ((#[Array.ofFn fun j => s[j.val]![0]!, Array.ofFn fun j => s[j.val]![1]!,
                 Array.ofFn fun j => s[j.val]![2]!, Array.ofFn fun j => s[j.val]![3]!]).get! 0)[j]! = s[j][0]
        sorry
      | _, _ => sorry


/-- ShiftRows invertierbar unter Wohlgeformtheit. -/
theorem invShiftRows_shiftRows (s : State) (hs : WellFormed s) :
    invShiftRows (shiftRows s) = s := by
  have hwf := hs
  obtain ⟨hsize, hrows⟩ := hs
  have L0 : (getRow s 0).size = 4 := by dsimp [getRow]; rw [Array.size_ofFn]
  have L1 : (getRow s 1).size = 4 := by dsimp [getRow]; rw [Array.size_ofFn]
  have L2 : (getRow s 2).size = 4 := by dsimp [getRow]; rw [Array.size_ofFn]
  have L3 : (getRow s 3).size = 4 := by dsimp [getRow]; rw [Array.size_ofFn]
  have R1 : (rotateLeft (getRow s 1) 1).size = 4 := by dsimp [rotateLeft]; rw [Array.size_ofFn]
  have R2 : (rotateLeft (getRow s 2) 2).size = 4 := by dsimp [rotateLeft]; rw [Array.size_ofFn]
  have R3 : (rotateLeft (getRow s 3) 3).size = 4 := by dsimp [rotateLeft]; rw [Array.size_ofFn]
  unfold invShiftRows shiftRows
  -- Die vier getRow-Aufrufe auf das stateFromRows-Konstrukt aufloesen.
  -- rows = #[getRow s 0, rotateLeft.., rotateLeft.., rotateLeft..]
  -- (#[..])[k]! ist fuer k=0..3 die jeweilige Zeile; Groesse 4 aus L0/R1/R2/R3.
  rw [getRow_stateFromRows _ _ _ _ 0 (by decide) (by simpa using L0)]
  rw [getRow_stateFromRows _ _ _ _ 1 (by decide) (by simpa using R1)]
  rw [getRow_stateFromRows _ _ _ _ 2 (by decide) (by simpa using R2)]
  rw [getRow_stateFromRows _ _ _ _ 3 (by decide) (by simpa using R3)]
  -- (#[..])[k]! konkret auswerten:
  simp only [List.getElem!_eq_getElem?_getD]  -- [PRUEFEN] ggf. weglassen; sonst rfl-artig
  -- rotateRight macht rotateLeft rueckgaengig:
  rw [rotateRight_rotateLeft (getRow s 1) L1 1]
  rw [rotateRight_rotateLeft (getRow s 2) L2 2]
  rw [rotateRight_rotateLeft (getRow s 3) L3 3]
  exact stateFromRows_getRow s hwf

theorem shiftRows_correct :
    IsCorrectInverse WellFormed shiftRows invShiftRows := by
  intro s hs; exact invShiftRows_shiftRows s hs

/-- AddRoundKey zweimal mit demselben Schluessel = Identitaet. -/
theorem addRoundKey_selfInverse (s : State) (rk : Block) (hs : WellFormed s) :
    addRoundKey (addRoundKey s rk) rk = s := by
  obtain ⟨hsize, hrows⟩ := hs
  simp only [addRoundKey]
  apply Array.ext
  · rw [Array.size_ofFn]; exact hsize.symm
  · intro j hj1 hj2
    rw [hsize] at hj2
    rw [getElem!_ofFn4' _ j hj2]
    apply Array.ext
    · rw [Array.size_ofFn]
      have hb : s[j]! = s[j] := getElem!_pos s j (by rw [hsize]; exact hj2)
      rw [← hb]; exact (hrows ⟨j, hj2⟩).symm
    · intro i hi1 hi2
      rw [Array.size_ofFn] at hi1
      rw [getElem!_ofFn4 _ i hi1]
      -- inneres ofFn der ZWEITEN Anwendung ist bereits via getElem!_ofFn4' /
      -- getElem!_ofFn4 reduziert; uebrig: (s[j]![i]! ^^^ K) ^^^ K
      exact xor_xor_cancel _ _

theorem addRoundKey_correct (rk : Block) :
    IsCorrectInverse WellFormed (addRoundKey · rk) (addRoundKey · rk) := by
  intro s hs; exact addRoundKey_selfInverse s rk hs

-- STUFE C: MixColumns-Invertierbarkeit (explizites Axiom)

axiom invMixColumn_mixColumn (col : Array Byte) (h : col.size = 4) :
    invMixColumn (mixColumn col) = col

end AESProofs
