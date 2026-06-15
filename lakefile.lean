import Lake
open Lake DSL

package aes_lean where
  leanOptions := #[⟨`autoImplicit, false⟩]

@[default_target]
lean_lib AES where
  roots := #[`AES.Types, `AES.SBox, `AES.Transforms, `AES.KeyExpansion, `AES.Cipher]

lean_exe aes_main where
  root := `Main

lean_lib AESTests where
  roots := #[`AES.TransformsTest]

--lean_lib AESProofs where
  --roots := #[`AES.TransformationsProof]

--require mathlib from git
  --"https://github.com/leanprover-community/mathlib4.git"
