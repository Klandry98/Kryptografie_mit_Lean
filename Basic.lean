import Mathlib

namespace Sorting

abbrev isSorted (l : List Nat) : Prop := l.Pairwise (· ≤ ·)

example : isSorted [1, 2, 3] := by decide
example : ¬ isSorted [2, 1] := by decide

def isCorrectSortAlgorithm (sort : List Nat → List Nat) :=
  ∀ l, List.Perm l (sort l) ∧ isSorted (sort l)

end Sorting
