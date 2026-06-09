import Mathlib
import L4Demo.Sort.Basic

-- Nach dem Skript von Burkhardt Renz "Funktionale Programierung in Lean"

open Sorting
open List

namespace InsertionSort

@[reducible]
private def insert (i : Nat) (l : List Nat) :=
  match l with
  | []     => [i]
  | h :: t => if i ≤ h then i :: h :: t else h :: insert i t

#eval insert 2 [1, 3]
#eval insert 2 [3, 4]
#eval insert 2 [0, 1]

def insertion_sort (il : List Nat) : List Nat :=
  match il with
  | []     => []
  | h :: t => insert h (insertion_sort t)

#eval insertion_sort [3, 5, 1, 7, 1, 25, 4]
def listPi := [3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5]
#eval insertion_sort listPi

theorem insert_perm : ∀ x l, Perm (x :: l) (insert x l) := by
  intro x l
  induction l with
  | nil =>
    apply singleton_perm_singleton.mpr
    rfl
  | cons head tail ih =>
    unfold insert
    split_ifs with hxleh
    · rfl
    · exact (Perm.swap head x tail).trans (Perm.cons head ih)

#print axioms insert_perm

lemma insert_sorted : ∀ a l, isSorted l → isSorted (insert a l) := by
  intro a l sl
  induction sl with
  | nil =>
    exact pairwise_singleton _ _
  | @cons head tail hforall htail ih =>
    unfold insert
    split_ifs with halex
    · apply Pairwise.cons
      · intro b hb
        rw [mem_cons] at hb
        rcases hb with rfl | hb
        · exact halex
        · exact le_trans halex (hforall b hb)
      · exact Pairwise.cons hforall htail
    · apply Pairwise.cons
      · intro b hb
        have hb' : b = a ∨ b ∈ tail := by
          apply mem_cons.mp
          rwa [(insert_perm a tail).mem_iff]
        rcases hb' with hl | hr
        · rw [hl]
          exact le_of_lt (not_le.mp halex)
        · exact hforall b hr
      · exact ih

#print axioms insert_sorted

theorem sort_sorted : ∀ l, isSorted (insertion_sort l) := by
  intro l
  induction l with
  | nil =>
    exact Pairwise.nil
  | cons a t ih =>
    exact insert_sorted a _ ih

theorem sort_perm : ∀ l, Perm l (insertion_sort l) := by
  intro l
  induction l with
  | nil =>
    exact nil_perm.mpr rfl
  | cons head tail ih =>
    exact (Perm.cons head ih).trans (insert_perm head (insertion_sort tail))

theorem insertionsort_correct : isCorrectSortAlgorithm insertion_sort := by
  unfold isCorrectSortAlgorithm
  intro l
  constructor
  · exact sort_perm l
  · exact sort_sorted l

#print axioms insertion_sort

end InsertionSort
