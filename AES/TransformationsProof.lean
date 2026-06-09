import AES.Types
import AES.SBox
import AES.Transforms

/-
  AES/TransformationsProofs.lean
  Formale Korrektheitsbeweise fuer die AES-Transformationen.
  Stufe A: Byte/Wort-Ebene per `decide` (im Kernel, kein native_decide).
  Stufe B: State-Roundtrips (ShiftRows/AddRoundKey unter Wohlgeformtheit).
  Stufe C: MixColumns-Invertierbarkeit (algebraisch, offen).
-/

namespace AESProofs

set_option maxRecDepth 300000
set_option maxHeartbeats 1000000

/-
  Lean 4.30 redefines UInt8 as { toBitVec : BitVec 8 } (not { val : Fin (2^8) }).
  Core has Decidable (∀ i : Fin n, P i) but no Decidable (∀ b : UInt8, P b).
  This bridge instance provides the missing link so `decide` can enumerate all 256
  byte values without importing Mathlib.
-/
private instance instDecidableForallUInt8 {P : UInt8 → Prop} [DecidablePred P] :
    Decidable (∀ b : UInt8, P b) :=
  decidable_of_iff (∀ i : Fin (2^8), P (UInt8.ofBitVec (BitVec.ofFin i)))
    ⟨fun h b => h b.toBitVec.toFin,
     fun h i => h (UInt8.ofBitVec (BitVec.ofFin i))⟩

/-- `invT` invertiert `T` unter der Vorbedingung `P`. -/
def IsCorrectInverse {α : Type _} (P : α → Prop) (T invT : α → α) : Prop :=
  ∀ s, P s → invT (T s) = s

-- ===========================================================================
-- STUFE A: Byte-/Wort-Ebene
-- ===========================================================================

theorem invSubByte_subByte : ∀ b : Byte, invSubByte (subByte b) = b := by decide
theorem subByte_invSubByte : ∀ b : Byte, subByte (invSubByte b) = b := by decide

theorem xtime_eq_gfMul : ∀ b : Byte, xtime b = gfMul 0x02 b := by decide

theorem gfMul_one_left  : ∀ a : Byte, gfMul 0x01 a = a := by decide
theorem gfMul_one_right : ∀ a : Byte, gfMul a 0x01 = a := by decide
theorem gfMul_zero_left : ∀ a : Byte, gfMul 0x00 a = 0x00 := by decide

/-- Kommutativitaet, eingeschraenkt auf die MixColumns-Konstanten (je 256 Faelle). -/
theorem gfMul_comm_const : ∀ b : Byte,
    (gfMul 0x02 b = gfMul b 0x02) ∧
    (gfMul 0x03 b = gfMul b 0x03) ∧
    (gfMul 0x09 b = gfMul b 0x09) ∧
    (gfMul 0x0b b = gfMul b 0x0b) ∧
    (gfMul 0x0d b = gfMul b 0x0d) ∧
    (gfMul 0x0e b = gfMul b 0x0e) := by decide

/-- Distributivitaet fuer die MixColumns-Konstanten {02,03,09,0b,0d,0e}. -/
-- 65536 Faelle × 6 Konjunkte × 8-Schritt-foldl: heartbeats deaktiviert.
set_option maxHeartbeats 0 in
theorem gfMul_distrib_const : ∀ x y : Byte,
    (gfMul 0x02 (x ^^^ y) = gfMul 0x02 x ^^^ gfMul 0x02 y) ∧
    (gfMul 0x03 (x ^^^ y) = gfMul 0x03 x ^^^ gfMul 0x03 y) ∧
    (gfMul 0x09 (x ^^^ y) = gfMul 0x09 x ^^^ gfMul 0x09 y) ∧
    (gfMul 0x0b (x ^^^ y) = gfMul 0x0b x ^^^ gfMul 0x0b y) ∧
    (gfMul 0x0d (x ^^^ y) = gfMul 0x0d x ^^^ gfMul 0x0d y) ∧
    (gfMul 0x0e (x ^^^ y) = gfMul 0x0e x ^^^ gfMul 0x0e y) := by decide

/-- Inverse-Matrix-Relation: M^{-1}·M = I (16 geschlossene Gleichungen). -/
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
  decide

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

-- ===========================================================================
-- STUFE B: State-Ebene
-- ===========================================================================

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

#print axioms invSubBytes_subBytes

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
    rw [Array.getElem_ofFn]
    rw [getElem!_pos _ _ (by rw [Array.size_ofFn]; exact Nat.mod_lt _ (by decide))]
    rw [Array.getElem_ofFn]
    rw [getElem!_pos _ _ (by rw [h]; exact Nat.mod_lt _ (by decide))]
    congr 1
    omega        -- sonst: set m := n % 4; have : m < 4 := Nat.mod_lt _ (by decide); omega

theorem rotateRight_rotateLeft' (row : Array Byte) (h : row.size = 4) (n : Fin 4) :
    rotateRight (rotateLeft row n.val) n.val = row :=
  rotateRight_rotateLeft row h n.val

#print axioms rotateRight_rotateLeft

/-- getRow invertiert stateFromRows (Brueckenlemma). OFFEN. -/
theorem getRow_stateFromRows (r0 r1 r2 r3 : Array Byte)
    (h0 : r0.size = 4) (h1 : r1.size = 4) (h2 : r2.size = 4) (h3 : r3.size = 4) :
    getRow (stateFromRows r0 r1 r2 r3) 0 = r0 := by
  dsimp [getRow, stateFromRows]
  apply Array.ext
  · rw [Array.size_ofFn]; exact h0.symm
  · intro i hi1 hi2
    rw [Array.getElem_ofFn]
    sorry

/-- stateFromRows invertiert getRow unter Wohlgeformtheit (Brueckenlemma). OFFEN. -/
theorem stateFromRows_getRow (s : State) (hs : WellFormed s) :
    stateFromRows (getRow s 0) (getRow s 1) (getRow s 2) (getRow s 3) = s := by
  obtain ⟨hsize, hrows⟩ := hs
  dsimp [stateFromRows, getRow]
  apply Array.ext
  · rw [Array.size_ofFn]; exact hsize.symm
  · intro j hj1 hj2
    sorry

/-- ShiftRows invertierbar unter Wohlgeformtheit. OFFEN (Komposition der Bausteine). -/
theorem invShiftRows_shiftRows (s : State) (hs : WellFormed s) :
    invShiftRows (shiftRows s) = s := by
  obtain ⟨hsize, hrows⟩ := hs
  unfold invShiftRows shiftRows
  sorry

theorem shiftRows_correct :
    IsCorrectInverse WellFormed shiftRows invShiftRows := by
  intro s hs; exact invShiftRows_shiftRows s hs

-- B.3  AddRoundKey selbstinvers

/-- AddRoundKey zweimal mit demselben Schluessel = Identitaet. OFFEN (ofFn-Roundtrip). -/
theorem addRoundKey_selfInverse (s : State) (rk : Block) (hs : WellFormed s) :
    addRoundKey (addRoundKey s rk) rk = s := by
  obtain ⟨hsize, hrows⟩ := hs
  unfold addRoundKey
  apply Array.ext
  · rw [Array.size_ofFn]; exact hsize.symm
  · intro j hj1 hj2
    rw [Array.getElem_ofFn]
    apply Array.ext
    · rw [Array.size_ofFn]
      sorry
    · intro i hi1 hi2
      rw [Array.getElem_ofFn]
      sorry

theorem addRoundKey_correct (rk : Block) :
    IsCorrectInverse WellFormed (addRoundKey · rk) (addRoundKey · rk) := by
  intro s hs; exact addRoundKey_selfInverse s rk hs

-- ===========================================================================
-- STUFE C: MixColumns-Invertierbarkeit (algebraisch, offen)
-- ===========================================================================

/-- MixColumns invertierbar. OFFEN: Zusammensetzung der Stufe-A-Bausteine. -/
theorem invMixColumn_mixColumn (col : Array Byte) (h : col.size = 4) :
    invMixColumn (mixColumn col) = col := by
  sorry

end AESProofs
