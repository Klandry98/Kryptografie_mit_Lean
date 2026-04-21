-- implementierung
def gcd : Nat → Nat → Nat
   a, 0 => a
   a, b + 1 => gcd (b + 1) (a % (b + 1))
termination_by a b => b

-- Beweis: gcd a 0 = a
theorem gcd_zero_right (a : Nat) : gcd a 0 = a := by
  simp [gcd]

-- Beweis: gcd 0 a = a
theorem gcd_zero_left (a : Nat) : gcd 0 a = a := by
  cases a with
    zero => simp [gcd]
    succ n => simp [gcd, Nat.zero_mod]
