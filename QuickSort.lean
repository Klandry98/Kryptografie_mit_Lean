import Mathlib
import L4Demo.Sort.Basic

open Sorting
open List

namespace QuickSort

@[reducible]
private def splitl (pi : Nat) (l : List Nat) := l.filter (· ≤ pi)

@[reducible]
private def splitr (pi : Nat) (l : List Nat) := l.filter (pi < ·)

def qsort (l : List Nat) : List Nat :=
  match l with
  | []     => []
  | h :: t => let left  := splitl h t
              let right := splitr h t
              qsort left ++ [h] ++ qsort right
  termination_by l.length
  decreasing_by
    all_goals grind [length_unattach]

#eval qsort [3, 5, 1, 7, 1, 25, 4]
def listEuler := [2, 7, 1, 8, 2, 8, 1, 8, 2, 8, 4]
#eval qsort listEuler

lemma split_left_le {e: Nat} (pi : Nat) (l : List Nat) (hin : e ∈ splitl pi l) : e ≤ pi := by
  rw [mem_filter, decide_eq_true_eq] at hin
  exact hin.2

lemma split_right_gt {e: Nat} (pi : Nat) (l : List Nat) (hin : e ∈ splitr pi l) : pi < e := by
  rw [mem_filter, decide_eq_true_eq] at hin
  exact hin.2

lemma splitl_append_splitr_perm (pi : Nat) (l : List Nat) : Perm (splitl pi l ++ splitr pi l) l := by
  calc filter (· ≤ pi) l ++ filter (pi < ·) l
      = filter (· ≤ pi) l ++ filter (fun x => !(· ≤ pi) x) l := by
          rw [append_cancel_left_eq]
          apply filter_congr
          intro x hl
          rw [← decide_not]
          congr 1
          rw [not_le]
    _ ~ l := filter_append_perm _ l

theorem sort_perm (l : List Nat) : l ~ qsort l := by
  fun_induction qsort l
  · exact Perm.nil
  · next pi tail lft rgt ihl ihr =>
    have hlft : lft = splitl pi tail := by simp [lft]
    have hrgt : rgt = splitr pi tail := by simp [rgt]
    rw [hlft] at ihl
    rw [hrgt] at ihr
    rw [append_assoc, singleton_append]
    have htp  := (splitl_append_splitr_perm pi tail).symm
    have htsp := htp.trans (ihl.append ihr)
    exact perm_cons_append_cons pi htsp

lemma qs_left_le {x : Nat} (pi : Nat) (l : List Nat) (hx : x ∈ qsort (splitl pi l)) : x ≤ pi := by
  apply split_left_le pi l
  have hp := sort_perm (splitl pi l)
  exact (Perm.mem_iff hp).mpr hx

lemma qs_left_part_le {x : Nat} (pi : Nat) (l : List Nat)
    (hx : x ∈ qsort (splitl pi l) ++ [pi]) : x ≤ pi := by
  rw [mem_append, mem_singleton] at hx
  rcases hx with hxl | hxr
  · exact qs_left_le pi l hxl
  · exact le_of_eq hxr

lemma qs_right_gt {x : Nat} (pi : Nat) (l : List Nat) (hx : x ∈ qsort (splitr pi l)) : pi < x := by
  apply split_right_gt pi l
  have hp := sort_perm (splitr pi l)
  exact (Perm.mem_iff hp).mpr hx

theorem sort_sorted (l : List Nat) : isSorted (qsort l) := by
  fun_induction qsort l
  · exact .nil
  · next pi tail lft rgt ihl ihr =>
    have hlft : lft = splitl pi tail := by simp [lft]
    have hrgt : rgt = splitr pi tail := by simp [rgt]
    rw [hlft] at ihl
    rw [hrgt] at ihr
    show isSorted (qsort (splitl pi tail) ++ [pi] ++ qsort (splitr pi tail))
    have hl : isSorted (qsort (splitl pi tail) ++ [pi]) := by
      unfold isSorted
      rw [pairwise_append]
      constructor
      · exact ihl
      · constructor
        · exact pairwise_singleton (· ≤ ·) pi
        · intro x hx
          exact forall_mem_singleton.mpr (qs_left_le pi tail hx)
    apply pairwise_append.mpr
    constructor
    · exact hl
    · constructor
      · exact ihr
      · intro a ha b hb
        have hl := qs_left_part_le pi tail ha
        have hr := qs_right_gt pi tail hb
        exact le_trans hl (le_of_lt hr)

theorem quicksort_correct : isCorrectSortAlgorithm qsort := by
  unfold isCorrectSortAlgorithm
  intro l
  constructor
  · exact sort_perm l
  · exact sort_sorted l

end QuickSort
