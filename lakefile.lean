import Lake
open Lake DSL

package aes_lean where
  leanOptions := #[
    -- Hier wird die Option korrekt als Paar (Name, Wert) angegeben
    ⟨`autoImplicit, false⟩
  ]

require mathlib from git
  "https://github.com/leanprover-community/mathlib4"

lean_lib AES
lean_exe aes_main where
  root := `Main
