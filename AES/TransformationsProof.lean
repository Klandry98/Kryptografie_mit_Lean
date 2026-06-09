import AES.Types
import Mathlib
import AES.SBox
import AES.Transforms

namespace AESProofs

set_option maxRecDepth 300000
-- Grosse `decide`-Enumerationen (256^2) brauchen mehr Heartbeats als der
-- Default (200000). Bleibt im Kernel (KEIN native_decide).
set_option maxHeartbeats 1000000

-- ===========================================================================
-- SPEZIFIKATION: Korrektheitspraedikat (analog `isCorrectSortAlgorithm`)
-- ===========================================================================

/-- Eine Transformation `T` mit Umkehrung `invT` ist korrekt invertierbar
    (unter einer Vorbedingung `P`), wenn `invT (T s) = s` fuer alle `s` mit
    `P s`. Direkt nach dem Muster von `isCorrectSortAlgorithm`, aber mit der
    fuer AES passenden Eigenschaft (Selbstinvertierbarkeit statt Perm). -/
def IsCorrectInverse {α : Type _} (P : α → Prop) (T invT : α → α) : Prop :=
  ∀ s, P s → invT (T s) = s

-- ===========================================================================
-- STUFE A: Byte-/Wort-Ebene  --  vollstaendig per Enumeration im KERNEL
-- ===========================================================================
--
-- Durchgaengig `decide` (im Kernel, minimale Trusted Computing Base) statt
-- `native_decide` (TCB um Compiler/Runtime erweitert, Axiom Lean.ofReduceBool).
-- Die einzige unvermeidbare Ausnahme ist xor_assoc (256^3) -- dort wird statt
-- Enumeration ein Bibliothekslemma verwendet.

-- A.1  S-Box-Bijektion (256 Faelle) -------------------------------------------

theorem invSubByte_subByte : ∀ b : Byte, invSubByte (subByte b) = b := by decide
theorem subByte_invSubByte : ∀ b : Byte, subByte (invSubByte b) = b := by decide

-- A.2  xtime = gfMul 0x02 (256 Faelle) ---------------------------------------

theorem xtime_eq_gfMul : ∀ b : Byte, xtime b = gfMul 0x02 b := by decide

-- A.3  GF(2^8)-Gesetze --------------------------------------------------------

theorem gfMul_one_left  : ∀ a : Byte, gfMul 0x01 a = a := by decide
theorem gfMul_one_right : ∀ a : Byte, gfMul a 0x01 = a := by decide
theorem gfMul_zero_left : ∀ a : Byte, gfMul 0x00 a = 0x00 := by decide

/-- Kommutativitaet (256^2). [PRUEFEN] Laufzeit von `decide` bei 65k Faellen ist
    toolchain-abhaengig; ggf. auf die MixColumns-Konstanten einschraenken. -/
theorem gfMul_comm : ∀ a b : Byte, gfMul a b = gfMul b a := by
  decide +kernel   -- 256^2: +kernel reduziert nur einmal, vermeidet whnf-Timeout

-- A.3'  Distributiv/Assoziativ -- auf MixColumns-Konstanten eingeschraenkt -----
--       (universell waere 256^3 und damit fuer den Kernel zu gross)

/-- Distributivitaet fuer die festen MixColumns-/InvMixColumns-Faktoren
    {02,03,09,0b,0d,0e}, je ueber zwei freie Bytes (256^2). [PRUEFEN] Laufzeit. -/
theorem gfMul_distrib_const : ∀ x y : Byte,
    (gfMul 0x02 (x ^^^ y) = gfMul 0x02 x ^^^ gfMul 0x02 y) ∧
    (gfMul 0x03 (x ^^^ y) = gfMul 0x03 x ^^^ gfMul 0x03 y) ∧
    (gfMul 0x09 (x ^^^ y) = gfMul 0x09 x ^^^ gfMul 0x09 y) ∧
    (gfMul 0x0b (x ^^^ y) = gfMul 0x0b x ^^^ gfMul 0x0b y) ∧
    (gfMul 0x0d (x ^^^ y) = gfMul 0x0d x ^^^ gfMul 0x0d y) ∧
    (gfMul 0x0e (x ^^^ y) = gfMul 0x0e x ^^^ gfMul 0x0e y) := by
  decide +kernel   -- 6 x 256^2

-- A.4  Inverse-Matrix-Relation (16 geschlossene Gleichungen, M^{-1}·M = I) -----

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

-- A.5  XOR-Gesetze (Bausteine fuer Stufe B/C) --------------------------------

/-- XOR-Selbstinversion (256^2). [PRUEFEN] Laufzeit; sonst via BitVec-Lemmata. -/
theorem xor_xor_cancel : ∀ x k : Byte, (x ^^^ k) ^^^ k = x := by
  decide +kernel   -- 256^2

theorem xor_comm_byte : ∀ a b : Byte, a ^^^ b = b ^^^ a := by
  decide +kernel   -- 256^2

/-- XOR-Assoziativitaet: ueber 256^3 -- NICHT per `decide`. Strukturell aus dem
    Bibliothekslemma statt per Enumeration (das ist sogar der sauberere Beweis).
    [PRUEFEN] exakter Name versionsabhaengig. -/
theorem xor_assoc_byte : ∀ a b c : Byte, (a ^^^ b) ^^^ c = a ^^^ (b ^^^ c) := by
  intro a b c
  exact UInt8.xor_assoc a b c        -- [PRUEFEN] sonst `simp [UInt8.xor_assoc]`

-- Axiom-Check Stufe A (Reith-Disziplin):
#print axioms invSubByte_subByte
#print axioms invMatrix_mul_matrix_eq_id
#print axioms xor_assoc_byte           -- darf NICHT Lean.ofReduceBool listen!

-- ===========================================================================
-- STUFE B: State-Ebene  --  strukturelle Roundtrips
-- ===========================================================================

-- B.1  SubBytes invertierbar  --  UNIVERSELL (map-Komposition, kein WellFormed)
-- ---------------------------------------------------------------------------
--
-- Reiths Lektion hier: strukturbasiert statt index-basiert. `map` erhaelt die
-- Struktur, daher braucht es KEINE Wohlgeformtheit und KEINE Index-Arithmetik.

theorem col_subByte_roundtrip (col : Array Byte) :
    (col.map subByte).map invSubByte = col := by
  rw [Array.map_map]                                   -- [PRUEFEN] Lemma-Name
  have hcomp : invSubByte ∘ subByte = id := by
    funext b; exact invSubByte_subByte b
  rw [hcomp, Array.map_id]                             -- [PRUEFEN] Lemma-Name

theorem invSubBytes_subBytes (s : State) : invSubBytes (subBytes s) = s := by
  unfold invSubBytes subBytes
  rw [Array.map_map]                                   -- [PRUEFEN]
  have hcomp :
      (fun col => Array.map invSubByte col) ∘ (fun col => Array.map subByte col)
        = (id : Array Byte → Array Byte) := by
    funext col
    simp only [Function.comp_apply, id_eq]
    exact col_subByte_roundtrip col
  rw [hcomp, Array.map_id]                             -- [PRUEFEN]

/-- SubBytes-Korrektheit in Spezifikations-Form (analog `..._correct`). -/
theorem subBytes_correct : IsCorrectInverse (fun _ => True) subBytes invSubBytes := by
  intro s _; exact invSubBytes_subBytes s

#print axioms invSubBytes_subBytes

-- B.2  Wohlgeformtheit -------------------------------------------------------

/-- s ist ein wohlgeformter 4x4-State. -/
def WellFormed (s : State) : Prop :=
  s.size = 4 ∧ ∀ i : Fin 4, (s[i.val]!).size = 4

-- B.2.0  Zeilen-Rotation: Roundtrip  --  KORRIGIERT
-- ---------------------------------------------------------------------------
--
-- FEHLERURSACHE der alten Version: nach EINEM `Array.getElem_ofFn` war nur das
-- aeussere ofFn aufgeloest. Das innere rotateLeft-ofFn stand noch da, also
-- existierte der zusammengesetzte Index ((i+4-n%4)%4 + n)%4 im Term NICHT --
-- daher "rewrite ... did not find an occurrence". Korrektur: BEIDE ofFn-Ebenen
-- aufloesen (mit getElem!_pos fuer den jeweiligen `!`-Zugriff), DANN omega.

theorem rotateRight_rotateLeft (row : Array Byte) (h : row.size = 4) (n : Nat) :
    rotateRight (rotateLeft row n) n = row := by
  dsimp [rotateRight, rotateLeft]
  apply Array.ext
  · rw [Array.size_ofFn]; exact h.symm
  · intro i hi1 hi2
    rw [h] at hi2                              -- hi2 : i < 4
    -- (1) aeusseres ofFn aufloesen
    rw [Array.getElem_ofFn]
    -- (2) innerer `!`-Zugriff auf das innere ofFn (Groesse 4): In-bounds + reduzieren
    rw [getElem!_pos _ _ (by rw [Array.size_ofFn]; exact Nat.mod_lt _ (by decide))]
    -- (3) inneres ofFn aufloesen -> JETZT entsteht der verschachtelte Index
    rw [Array.getElem_ofFn]
    -- (4) verbleibender `!`-Zugriff auf row: In-bounds via h
    rw [getElem!_pos _ _ (by rw [h]; exact Nat.mod_lt _ (by decide))]
    -- (5) beide Seiten sind getElem; Index-Identitaet schliessen
    congr 1
    omega        -- [PRUEFEN] falls haengt: `set m := n % 4 with hm;
                 -- have : m < 4 := Nat.mod_lt _ (by decide); omega`  oder Reiths `grind`

theorem rotateRight_rotateLeft' (row : Array Byte) (h : row.size = 4) (n : Fin 4) :
    rotateRight (rotateLeft row n.val) n.val = row :=
  rotateRight_rotateLeft row h n.val

#print axioms rotateRight_rotateLeft

-- B.2.1  getRow invertiert stateFromRows  (Brueckenlemma)
-- ---------------------------------------------------------------------------
--
-- [PRUEFEN/sorry] Dies ist das eigentliche strukturelle Brueckenlemma. Es
-- braucht die exakte Indexform von getRow/stateFromRows aus Transforms.lean.
-- Beweisform identisch zur Rotation: Array.ext + getElem!_pos-Kette.
-- Die `!`-Zugriffe sind: in die Liste #[r0,r1,r2,r3] (Index 0..3, by decide)
-- und in r0 (Index i < 4, via h0).

theorem getRow_stateFromRows (r0 r1 r2 r3 : Array Byte)
    (h0 : r0.size = 4) (h1 : r1.size = 4) (h2 : r2.size = 4) (h3 : r3.size = 4) :
    getRow (stateFromRows r0 r1 r2 r3) 0 = r0 := by
  dsimp [getRow, stateFromRows]
  apply Array.ext
  · rw [Array.size_ofFn]; exact h0.symm
  · intro i hi1 hi2
    rw [Array.getElem_ofFn]
    -- [PRUEFEN] analog zur Rotation: erst Listen-`!` (#[r0..r3]) mit getElem!_pos
    -- (Index 0 < 4), dann r0-`!` mit getElem!_pos (Index i < 4 via h0), dann rfl.
    --   rw [getElem!_pos _ _ (by decide)]
    --   rw [getElem!_pos _ _ (by rw [h0]; exact hi2)]   -- hi2 nach rw[h0]
    sorry

-- B.2.2  stateFromRows invertiert getRow  (Brueckenlemma, Eta unter WellFormed)
theorem stateFromRows_getRow (s : State) (hs : WellFormed s) :
    stateFromRows (getRow s 0) (getRow s 1) (getRow s 2) (getRow s 3) = s := by
  obtain ⟨hsize, hrows⟩ := hs
  dsimp [stateFromRows, getRow]
  apply Array.ext
  · rw [Array.size_ofFn]; exact hsize.symm
  · intro j hj1 hj2
    -- [PRUEFEN] aeusseres ofFn -> inneres ofFn -> getElem!_pos-Kette via hsize/hrows
    sorry

-- B.2.3  Hauptsatz: ShiftRows invertierbar (unter WellFormed)
theorem invShiftRows_shiftRows (s : State) (hs : WellFormed s) :
    invShiftRows (shiftRows s) = s := by
  obtain ⟨hsize, hrows⟩ := hs
  unfold invShiftRows shiftRows
  -- Bausteine: getRow_stateFromRows (loest shiftRows-Konstruktion auf),
  -- rotateRight_rotateLeft' (macht je Zeile die Rotation rueckgaengig),
  -- stateFromRows_getRow (rekonstruiert s). Sobald die beiden Brueckenlemmata
  -- oben stehen, ist dies eine reine Komposition.
  sorry

/-- ShiftRows-Korrektheit in Spezifikations-Form. -/
theorem shiftRows_correct :
    IsCorrectInverse WellFormed shiftRows invShiftRows := by
  intro s hs; exact invShiftRows_shiftRows s hs

-- B.3  AddRoundKey selbstinvers (unter WellFormed)

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
      -- (s[j]!).size = 4 aus hrows j; j < 4 via hsize. [PRUEFEN]
      sorry
    · intro i hi1 hi2
      rw [Array.getElem_ofFn]
      -- innere `!`-Zugriffe mit getElem!_pos rechtfertigen, dann xor_xor_cancel.
      -- [PRUEFEN]
      sorry

theorem addRoundKey_correct (rk : Block) :
    IsCorrectInverse WellFormed (addRoundKey · rk) (addRoundKey · rk) := by
  intro s hs; exact addRoundKey_selfInverse s rk hs

-- STUFE C: MixColumns-Invertierbarkeit  --  algebraisch (future work)

theorem invMixColumn_mixColumn (col : Array Byte) (h : col.size = 4) :
    invMixColumn (mixColumn col) = col := by
  sorry

end AESProofs
