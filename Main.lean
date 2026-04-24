
import AES.Cipher

/-- NIST AESAVS GFSbox Test Vector #1 -/
def test_gfsbox_1 : IO Unit := do
  let key := hexToBlock "00000000000000000000000000000000"
  let pt  := hexToBlock "f34481ec3cc627bacd5dc3fb08f273e6"
  let expected_ct := hexToBlock "0336763e966d92595a567cc9ce537f5e"
  let ct := aesEncrypt pt key
  IO.println s!"Key:       00000000000000000000000000000000"
  IO.println s!"Plaintext: f34481ec3cc627bacd5dc3fb08f273e6"
  IO.println s!"Expected:  0336763e966d92595a567cc9ce537f5e"
  IO.println s!"Got:       {blockToHex ct}"
  IO.println s!"Match:     {ct == expected_ct}"

/-- NIST Appendix B Testvektor (FIPS 197) -/
def test_fips197 : IO Unit := do
  let key := hexToBlock "2b7e151628aed2a6abf7158809cf4f3c"
  let pt  := hexToBlock "3243f6a8885a308d313198a2e0370734"
  let expected_ct := hexToBlock "3925841d02dc09fbdc118597196a0b32"
  let ct := aesEncrypt pt key
  IO.println s!""
  IO.println s!"=== FIPS 197 Appendix B ==="
  IO.println s!"Key:       2b7e151628aed2a6abf7158809cf4f3c"
  IO.println s!"Plaintext: 3243f6a8885a308d313198a2e0370734"
  IO.println s!"Expected:  3925841d02dc09fbdc118597196a0b32"
  IO.println s!"Got:       {blockToHex ct}"
  IO.println s!"Match:     {ct == expected_ct}"

/-- Roundtrip-Test: encrypt dann decrypt -/
def test_roundtrip : IO Unit := do
  let key := hexToBlock "2b7e151628aed2a6abf7158809cf4f3c"
  let pt  := hexToBlock "3243f6a8885a308d313198a2e0370734"
  let ct  := aesEncrypt pt key
  let pt2 := aesDecrypt ct key
  IO.println s!""
  IO.println s!"=== Roundtrip Test ==="
  IO.println s!"Original:  {blockToHex pt}"
  IO.println s!"Encrypted: {blockToHex ct}"
  IO.println s!"Decrypted: {blockToHex pt2}"
  IO.println s!"Match:     {pt == pt2}"

def main : IO Unit := do
  IO.println "=== AES-128 Lean 4 — AESAVS Validation ==="
  IO.println ""
  IO.println "=== GFSbox Test #1 ==="
  test_gfsbox_1
  test_fips197
  test_roundtrip
  IO.println ""
  IO.println "=== Done ==="
