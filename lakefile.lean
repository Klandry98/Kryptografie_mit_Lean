import Lake
open Lake DSL

package aes_lean where
  leanOptions := #[⟨`autoImplicit, false⟩]

@[default_target]
lean_lib AES where
  roots := #[`AES.Types, `AES.SBox, `AES.Transforms, `AES.KeyExpansion, `AES.Cipher]

lean_exe aes_main where
  root := `Main
