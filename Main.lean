/-
  Main.lean
  AESAVS-Validierung: GFSbox, KeySbox, VarTxt, VarKey
  Bachelorarbeit: Kryptografie mit Lean
-/
import AES.Cipher
set_option maxRecDepth 1000

-- ═══════════════════════════════════════════════
-- Hilfsfunktion: Testvektor prüfen
-- ═══════════════════════════════════════════════

def testEncrypt (name : String) (keyHex ptHex ctHex : String) : IO Bool := do
  let got := aesEncrypt (hexToBlock ptHex) (hexToBlock keyHex)
  let ok  := got == hexToBlock ctHex
  unless ok do IO.println s!"  FAIL {name}: expected {ctHex}, got {blockToHex got}"
  pure ok

def testDecrypt (name : String) (keyHex ptHex ctHex : String) : IO Bool := do
  let got := aesDecrypt (hexToBlock ctHex) (hexToBlock keyHex)
  let ok  := got == hexToBlock ptHex
  unless ok do IO.println s!"  FAIL {name}: expected {ptHex}, got {blockToHex got}"
  pure ok

-- ═══════════════════════════════════════════════
-- GFSbox Tests (7 Vektoren, Key = 0)
-- ═══════════════════════════════════════════════
def runGFSbox : IO Nat :=
  let zeroKey := "00000000000000000000000000000000"
  let tests : List (IO Bool) := [
    testEncrypt "GFSbox-Enc-1" zeroKey "f34481ec3cc627bacd5dc3fb08f273e6" "0336763e966d92595a567cc9ce537f5e",
    testEncrypt "GFSbox-Enc-2" zeroKey "9798c4640bad75c7c3227db910174e72" "a9a1631bf4996954ebc093957b234589",
    testEncrypt "GFSbox-Enc-3" zeroKey "96ab5c2ff612d9dfaae8c31f30c42168" "ff4f8391a6a40ca5b25d23bedd44a597",
    testEncrypt "GFSbox-Enc-4" zeroKey "6a118a874519e64e9963798a503f1d35" "dc43be40be0e53712f7e2bf5ca707209",
    testEncrypt "GFSbox-Enc-5" zeroKey "cb9fceec81286ca3e989bd979b0cb284" "92beedab1895a94faa69b632e5cc47ce",
    testEncrypt "GFSbox-Enc-6" zeroKey "b26aeb1874e47ca8358ff22378f09144" "459264f4798f6a78bacb89c15ed3d601",
    testEncrypt "GFSbox-Enc-7" zeroKey "58c8e00b2631686d54eab84b91f0aca1" "08a4e2efec8a8e3312ca7460b9040bbf",
    testDecrypt "GFSbox-Dec-1" zeroKey "f34481ec3cc627bacd5dc3fb08f273e6" "0336763e966d92595a567cc9ce537f5e",
    testDecrypt "GFSbox-Dec-2" zeroKey "9798c4640bad75c7c3227db910174e72" "a9a1631bf4996954ebc093957b234589",
    testDecrypt "GFSbox-Dec-3" zeroKey "96ab5c2ff612d9dfaae8c31f30c42168" "ff4f8391a6a40ca5b25d23bedd44a597",
    testDecrypt "GFSbox-Dec-4" zeroKey "6a118a874519e64e9963798a503f1d35" "dc43be40be0e53712f7e2bf5ca707209",
    testDecrypt "GFSbox-Dec-5" zeroKey "cb9fceec81286ca3e989bd979b0cb284" "92beedab1895a94faa69b632e5cc47ce",
    testDecrypt "GFSbox-Dec-6" zeroKey "b26aeb1874e47ca8358ff22378f09144" "459264f4798f6a78bacb89c15ed3d601",
    testDecrypt "GFSbox-Dec-7" zeroKey "58c8e00b2631686d54eab84b91f0aca1" "08a4e2efec8a8e3312ca7460b9040bbf"
  ]
  tests.foldlM (fun n t => do let b ← t; pure (n + if b then 1 else 0)) 0

-- ═══════════════════════════════════════════════
-- KeySbox Tests (21 Vektoren, PT = 0)
-- ═══════════════════════════════════════════════

def runKeySbox : IO Nat :=
  let zeroPt := "00000000000000000000000000000000"
  let tests : List (IO Bool) := [
    testEncrypt "KeySbox-Enc-1"  "10a58869d74be5a374cf867cfb473859" zeroPt "6d251e6944b051e04eaa6fb4dbf78465",
    testEncrypt "KeySbox-Enc-2"  "caea65cdbb75e9169ecd22ebe6e54675" zeroPt "6e29201190152df4ee058139def610bb",
    testEncrypt "KeySbox-Enc-3"  "a2e2fa9baf7d20822ca9f0542f764a41" zeroPt "c3b44b95d9d2f25670eee9a0de099fa3",
    testEncrypt "KeySbox-Enc-4"  "b6364ac4e1de1e285eaf144a2415f7a0" zeroPt "5d9b05578fc944b3cf1ccf0e746cd581",
    testEncrypt "KeySbox-Enc-5"  "64cf9c7abc50b888af65f49d521944b2" zeroPt "f7efc89d5dba578104016ce5ad659c05",
    testEncrypt "KeySbox-Enc-6"  "47d6742eefcc0465dc96355e851b64d9" zeroPt "0306194f666d183624aa230a8b264ae7",
    testEncrypt "KeySbox-Enc-7"  "3eb39790678c56bee34bbcdeccf6cdb5" zeroPt "858075d536d79ccee571f7d7204b1f67",
    testEncrypt "KeySbox-Enc-8"  "64110a924f0743d500ccadae72c13427" zeroPt "35870c6a57e9e92314bcb8087cde72ce",
    testEncrypt "KeySbox-Enc-9"  "18d8126516f8a12ab1a36d9f04d68e51" zeroPt "6c68e9be5ec41e22c825b7c7affb4363",
    testEncrypt "KeySbox-Enc-10" "f530357968578480b398a3c251cd1093" zeroPt "f5df39990fc688f1b07224cc03e86cea",
    testEncrypt "KeySbox-Enc-11" "da84367f325d42d601b4326964802e8e" zeroPt "bba071bcb470f8f6586e5d3add18bc66",
    testEncrypt "KeySbox-Enc-12" "e37b1c6aa2846f6fdb413f238b089f23" zeroPt "43c9f7e62f5d288bb27aa40ef8fe1ea8",
    testEncrypt "KeySbox-Enc-13" "6c002b682483e0cabcc731c253be5674" zeroPt "3580d19cff44f1014a7c966a69059de5",
    testEncrypt "KeySbox-Enc-14" "143ae8ed6555aba96110ab58893a8ae1" zeroPt "806da864dd29d48deafbe764f8202aef",
    testEncrypt "KeySbox-Enc-15" "b69418a85332240dc82492353956ae0c" zeroPt "a303d940ded8f0baff6f75414cac5243",
    testEncrypt "KeySbox-Enc-16" "71b5c08a1993e1362e4d0ce9b22b78d5" zeroPt "c2dabd117f8a3ecabfbb11d12194d9d0",
    testEncrypt "KeySbox-Enc-17" "e234cdca2606b81f29408d5f6da21206" zeroPt "fff60a4740086b3b9c56195b98d91a7b",
    testEncrypt "KeySbox-Enc-18" "13237c49074a3da078dc1d828bb78c6f" zeroPt "8146a08e2357f0caa30ca8c94d1a0544",
    testEncrypt "KeySbox-Enc-19" "3071a2a48fe6cbd04f1a129098e308f8" zeroPt "4b98e06d356deb07ebb824e5713f7be3",
    testEncrypt "KeySbox-Enc-20" "90f42ec0f68385f2ffc5dfc03a654dce" zeroPt "7a20a53d460fc9ce0423a7a0764c6cf2",
    testEncrypt "KeySbox-Enc-21" "febd9a24d8b65c1c787d50a4ed3619a9" zeroPt "f4a70d8af877f9b02b4c40df57d45b17",
    testDecrypt "KeySbox-Dec-1"  "10a58869d74be5a374cf867cfb473859" zeroPt "6d251e6944b051e04eaa6fb4dbf78465",
    testDecrypt "KeySbox-Dec-2"  "caea65cdbb75e9169ecd22ebe6e54675" zeroPt "6e29201190152df4ee058139def610bb",
    testDecrypt "KeySbox-Dec-3"  "a2e2fa9baf7d20822ca9f0542f764a41" zeroPt "c3b44b95d9d2f25670eee9a0de099fa3",
    testDecrypt "KeySbox-Dec-4"  "b6364ac4e1de1e285eaf144a2415f7a0" zeroPt "5d9b05578fc944b3cf1ccf0e746cd581",
    testDecrypt "KeySbox-Dec-5"  "64cf9c7abc50b888af65f49d521944b2" zeroPt "f7efc89d5dba578104016ce5ad659c05",
    testDecrypt "KeySbox-Dec-6"  "47d6742eefcc0465dc96355e851b64d9" zeroPt "0306194f666d183624aa230a8b264ae7",
    testDecrypt "KeySbox-Dec-7"  "3eb39790678c56bee34bbcdeccf6cdb5" zeroPt "858075d536d79ccee571f7d7204b1f67",
    testDecrypt "KeySbox-Dec-8"  "64110a924f0743d500ccadae72c13427" zeroPt "35870c6a57e9e92314bcb8087cde72ce",
    testDecrypt "KeySbox-Dec-9"  "18d8126516f8a12ab1a36d9f04d68e51" zeroPt "6c68e9be5ec41e22c825b7c7affb4363",
    testDecrypt "KeySbox-Dec-10" "f530357968578480b398a3c251cd1093" zeroPt "f5df39990fc688f1b07224cc03e86cea",
    testDecrypt "KeySbox-Dec-11" "da84367f325d42d601b4326964802e8e" zeroPt "bba071bcb470f8f6586e5d3add18bc66",
    testDecrypt "KeySbox-Dec-12" "e37b1c6aa2846f6fdb413f238b089f23" zeroPt "43c9f7e62f5d288bb27aa40ef8fe1ea8",
    testDecrypt "KeySbox-Dec-13" "6c002b682483e0cabcc731c253be5674" zeroPt "3580d19cff44f1014a7c966a69059de5",
    testDecrypt "KeySbox-Dec-14" "143ae8ed6555aba96110ab58893a8ae1" zeroPt "806da864dd29d48deafbe764f8202aef",
    testDecrypt "KeySbox-Dec-15" "b69418a85332240dc82492353956ae0c" zeroPt "a303d940ded8f0baff6f75414cac5243",
    testDecrypt "KeySbox-Dec-16" "71b5c08a1993e1362e4d0ce9b22b78d5" zeroPt "c2dabd117f8a3ecabfbb11d12194d9d0",
    testDecrypt "KeySbox-Dec-17" "e234cdca2606b81f29408d5f6da21206" zeroPt "fff60a4740086b3b9c56195b98d91a7b",
    testDecrypt "KeySbox-Dec-18" "13237c49074a3da078dc1d828bb78c6f" zeroPt "8146a08e2357f0caa30ca8c94d1a0544",
    testDecrypt "KeySbox-Dec-19" "3071a2a48fe6cbd04f1a129098e308f8" zeroPt "4b98e06d356deb07ebb824e5713f7be3",
    testDecrypt "KeySbox-Dec-20" "90f42ec0f68385f2ffc5dfc03a654dce" zeroPt "7a20a53d460fc9ce0423a7a0764c6cf2",
    testDecrypt "KeySbox-Dec-21" "febd9a24d8b65c1c787d50a4ed3619a9" zeroPt "f4a70d8af877f9b02b4c40df57d45b17"
  ]
  tests.foldlM (fun n t => do let b ← t; pure (n + if b then 1 else 0)) 0

-- ═══════════════════════════════════════════════
-- VarTxt Tests (126 Vektoren, Key = 0)
-- ═══════════════════════════════════════════════
def runVarTxt : IO Nat :=
  let zeroKey := "00000000000000000000000000000000"
  let tests : List (IO Bool) := [
    testEncrypt "VarTxt-1"   zeroKey "80000000000000000000000000000000" "3ad78e726c1ec02b7ebfe92b23d9ec34",
    testEncrypt "VarTxt-2"   zeroKey "c0000000000000000000000000000000" "aae5939c8efdf2f04e60b9fe7117b2c2",
    testEncrypt "VarTxt-3"   zeroKey "e0000000000000000000000000000000" "f031d4d74f5dcbf39daaf8ca3af6e527",
    testEncrypt "VarTxt-4"   zeroKey "f0000000000000000000000000000000" "96d9fd5cc4f07441727df0f33e401a36",
    testEncrypt "VarTxt-5"   zeroKey "f8000000000000000000000000000000" "30ccdb044646d7e1f3ccea3dca08b8c0",
    testEncrypt "VarTxt-6"   zeroKey "fc000000000000000000000000000000" "16ae4ce5042a67ee8e177b7c587ecc82",
    testEncrypt "VarTxt-7"   zeroKey "fe000000000000000000000000000000" "b6da0bb11a23855d9c5cb1b4c6412e0a",
    testEncrypt "VarTxt-8"   zeroKey "ff000000000000000000000000000000" "db4f1aa530967d6732ce4715eb0ee24b",
    testEncrypt "VarTxt-9"   zeroKey "ff800000000000000000000000000000" "a81738252621dd180a34f3455b4baa2f",
    testEncrypt "VarTxt-10"  zeroKey "ffc00000000000000000000000000000" "77e2b508db7fd89234caf7939ee5621a",
    testEncrypt "VarTxt-11"  zeroKey "ffe00000000000000000000000000000" "b8499c251f8442ee13f0933b688fcd19",
    testEncrypt "VarTxt-12"  zeroKey "fff00000000000000000000000000000" "965135f8a81f25c9d630b17502f68e53",
    testEncrypt "VarTxt-13"  zeroKey "fff80000000000000000000000000000" "8b87145a01ad1c6cede995ea3670454f",
    testEncrypt "VarTxt-14"  zeroKey "fffc0000000000000000000000000000" "8eae3b10a0c8ca6d1d3b0fa61e56b0b2",
    testEncrypt "VarTxt-15"  zeroKey "fffe0000000000000000000000000000" "64b4d629810fda6bafdf08f3b0d8d2c5",
    testEncrypt "VarTxt-16"  zeroKey "ffff0000000000000000000000000000" "d7e5dbd3324595f8fdc7d7c571da6c2a",
    testEncrypt "VarTxt-17"  zeroKey "ffff8000000000000000000000000000" "f3f72375264e167fca9de2c1527d9606",
    testEncrypt "VarTxt-18"  zeroKey "ffffc000000000000000000000000000" "8ee79dd4f401ff9b7ea945d86666c13b",
    testEncrypt "VarTxt-19"  zeroKey "ffffe000000000000000000000000000" "dd35cea2799940b40db3f819cb94c08b",
    testEncrypt "VarTxt-20"  zeroKey "fffff000000000000000000000000000" "6941cb6b3e08c2b7afa581ebdd607b87",
    testEncrypt "VarTxt-21"  zeroKey "fffff800000000000000000000000000" "2c20f439f6bb097b29b8bd6d99aad799",
    testEncrypt "VarTxt-22"  zeroKey "fffffc00000000000000000000000000" "625d01f058e565f77ae86378bd2c49b3",
    testEncrypt "VarTxt-23"  zeroKey "fffffe00000000000000000000000000" "c0b5fd98190ef45fbb4301438d095950",
    testEncrypt "VarTxt-24"  zeroKey "ffffff00000000000000000000000000" "13001ff5d99806efd25da34f56be854b",
    testEncrypt "VarTxt-25"  zeroKey "ffffff80000000000000000000000000" "3b594c60f5c8277a5113677f94208d82",
    testEncrypt "VarTxt-26"  zeroKey "ffffffc0000000000000000000000000" "e9c0fc1818e4aa46bd2e39d638f89e05",
    testEncrypt "VarTxt-27"  zeroKey "ffffffe0000000000000000000000000" "f8023ee9c3fdc45a019b4e985c7e1a54",
    testEncrypt "VarTxt-28"  zeroKey "fffffff0000000000000000000000000" "35f40182ab4662f3023baec1ee796b57",
    testEncrypt "VarTxt-29"  zeroKey "fffffff8000000000000000000000000" "3aebbad7303649b4194a6945c6cc3694",
    testEncrypt "VarTxt-30"  zeroKey "fffffffc000000000000000000000000" "a2124bea53ec2834279bed7f7eb0f938",
    testEncrypt "VarTxt-31"  zeroKey "fffffffe000000000000000000000000" "b9fb4399fa4facc7309e14ec98360b0a",
    testEncrypt "VarTxt-32"  zeroKey "ffffffff000000000000000000000000" "c26277437420c5d634f715aea81a9132",
    testEncrypt "VarTxt-33"  zeroKey "ffffffff800000000000000000000000" "171a0e1b2dd424f0e089af2c4c10f32f",
    testEncrypt "VarTxt-34"  zeroKey "ffffffffc00000000000000000000000" "7cadbe402d1b208fe735edce00aee7ce",
    testEncrypt "VarTxt-35"  zeroKey "ffffffffe00000000000000000000000" "43b02ff929a1485af6f5c6d6558baa0f",
    testEncrypt "VarTxt-36"  zeroKey "fffffffff00000000000000000000000" "092faacc9bf43508bf8fa8613ca75dea",
    testEncrypt "VarTxt-37"  zeroKey "fffffffff80000000000000000000000" "cb2bf8280f3f9742c7ed513fe802629c",
    testEncrypt "VarTxt-38"  zeroKey "fffffffffc0000000000000000000000" "215a41ee442fa992a6e323986ded3f68",
    testEncrypt "VarTxt-39"  zeroKey "fffffffffe0000000000000000000000" "f21e99cf4f0f77cea836e11a2fe75fb1",
    testEncrypt "VarTxt-40"  zeroKey "ffffffffff0000000000000000000000" "95e3a0ca9079e646331df8b4e70d2cd6",
    testEncrypt "VarTxt-41"  zeroKey "ffffffffff8000000000000000000000" "4afe7f120ce7613f74fc12a01a828073",
    testEncrypt "VarTxt-42"  zeroKey "ffffffffffc000000000000000000000" "827f000e75e2c8b9d479beed913fe678",
    testEncrypt "VarTxt-43"  zeroKey "ffffffffffe000000000000000000000" "35830c8e7aaefe2d30310ef381cbf691",
    testEncrypt "VarTxt-44"  zeroKey "fffffffffff000000000000000000000" "191aa0f2c8570144f38657ea4085ebe5",
    testEncrypt "VarTxt-45"  zeroKey "fffffffffff800000000000000000000" "85062c2c909f15d9269b6c18ce99c4f0",
    testEncrypt "VarTxt-46"  zeroKey "fffffffffffc00000000000000000000" "678034dc9e41b5a560ed239eeab1bc78",
    testEncrypt "VarTxt-47"  zeroKey "fffffffffffe00000000000000000000" "c2f93a4ce5ab6d5d56f1b93cf19911c1",
    testEncrypt "VarTxt-48"  zeroKey "ffffffffffff00000000000000000000" "1c3112bcb0c1dcc749d799743691bf82",
    testEncrypt "VarTxt-49"  zeroKey "ffffffffffff80000000000000000000" "00c55bd75c7f9c881989d3ec1911c0d4",
    testEncrypt "VarTxt-50"  zeroKey "ffffffffffffc0000000000000000000" "ea2e6b5ef182b7dff3629abd6a12045f",
    testEncrypt "VarTxt-51"  zeroKey "ffffffffffffe0000000000000000000" "22322327e01780b17397f24087f8cc6f",
    testEncrypt "VarTxt-52"  zeroKey "fffffffffffff0000000000000000000" "c9cacb5cd11692c373b2411768149ee7",
    testEncrypt "VarTxt-53"  zeroKey "fffffffffffff8000000000000000000" "a18e3dbbca577860dab6b80da3139256",
    testEncrypt "VarTxt-54"  zeroKey "fffffffffffffc000000000000000000" "79b61c37bf328ecca8d743265a3d425c",
    testEncrypt "VarTxt-55"  zeroKey "fffffffffffffe000000000000000000" "d2d99c6bcc1f06fda8e27e8ae3f1ccc7",
    testEncrypt "VarTxt-56"  zeroKey "ffffffffffffff000000000000000000" "1bfd4b91c701fd6b61b7f997829d663b",
    testEncrypt "VarTxt-57"  zeroKey "ffffffffffffff800000000000000000" "11005d52f25f16bdc9545a876a63490a",
    testEncrypt "VarTxt-58"  zeroKey "ffffffffffffffc00000000000000000" "3a4d354f02bb5a5e47d39666867f246a",
    testEncrypt "VarTxt-59"  zeroKey "ffffffffffffffe00000000000000000" "d451b8d6e1e1a0ebb155fbbf6e7b7dc3",
    testEncrypt "VarTxt-60"  zeroKey "fffffffffffffff00000000000000000" "6898d4f42fa7ba6a10ac05e87b9f2080",
    testEncrypt "VarTxt-61"  zeroKey "fffffffffffffff80000000000000000" "b611295e739ca7d9b50f8e4c0e754a3f",
    testEncrypt "VarTxt-62"  zeroKey "fffffffffffffffc0000000000000000" "7d33fc7d8abe3ca1936759f8f5deaf20",
    testEncrypt "VarTxt-63"  zeroKey "fffffffffffffffe0000000000000000" "3b5e0f566dc96c298f0c12637539b25c",
    testEncrypt "VarTxt-64"  zeroKey "ffffffffffffffff0000000000000000" "f807c3e7985fe0f5a50e2cdb25c5109e",
    testEncrypt "VarTxt-65"  zeroKey "ffffffffffffffff8000000000000000" "41f992a856fb278b389a62f5d274d7e9",
    testEncrypt "VarTxt-66"  zeroKey "ffffffffffffffffc000000000000000" "10d3ed7a6fe15ab4d91acbc7d0767ab1",
    testEncrypt "VarTxt-67"  zeroKey "ffffffffffffffffe000000000000000" "21feecd45b2e675973ac33bf0c5424fc",
    testEncrypt "VarTxt-68"  zeroKey "fffffffffffffffff000000000000000" "1480cb3955ba62d09eea668f7c708817",
    testEncrypt "VarTxt-69"  zeroKey "fffffffffffffffff800000000000000" "66404033d6b72b609354d5496e7eb511",
    testEncrypt "VarTxt-70"  zeroKey "fffffffffffffffffc00000000000000" "1c317a220a7d700da2b1e075b00266e1",
    testEncrypt "VarTxt-71"  zeroKey "fffffffffffffffffe00000000000000" "ab3b89542233f1271bf8fd0c0f403545",
    testEncrypt "VarTxt-72"  zeroKey "ffffffffffffffffff00000000000000" "d93eae966fac46dca927d6b114fa3f9e",
    testEncrypt "VarTxt-73"  zeroKey "ffffffffffffffffff80000000000000" "1bdec521316503d9d5ee65df3ea94ddf",
    testEncrypt "VarTxt-74"  zeroKey "ffffffffffffffffffc0000000000000" "eef456431dea8b4acf83bdae3717f75f",
    testEncrypt "VarTxt-75"  zeroKey "ffffffffffffffffffe0000000000000" "06f2519a2fafaa596bfef5cfa15c21b9",
    testEncrypt "VarTxt-76"  zeroKey "fffffffffffffffffff0000000000000" "251a7eac7e2fe809e4aa8d0d7012531a",
    testEncrypt "VarTxt-77"  zeroKey "fffffffffffffffffff8000000000000" "3bffc16e4c49b268a20f8d96a60b4058",
    testEncrypt "VarTxt-78"  zeroKey "fffffffffffffffffffc000000000000" "e886f9281999c5bb3b3e8862e2f7c988",
    testEncrypt "VarTxt-79"  zeroKey "fffffffffffffffffffe000000000000" "563bf90d61beef39f48dd625fcef1361",
    testEncrypt "VarTxt-80"  zeroKey "ffffffffffffffffffff000000000000" "4d37c850644563c69fd0acd9a049325b",
    testEncrypt "VarTxt-81"  zeroKey "ffffffffffffffffffff800000000000" "b87c921b91829ef3b13ca541ee1130a6",
    testEncrypt "VarTxt-82"  zeroKey "ffffffffffffffffffffc00000000000" "2e65eb6b6ea383e109accce8326b0393",
    testEncrypt "VarTxt-83"  zeroKey "ffffffffffffffffffffe00000000000" "9ca547f7439edc3e255c0f4d49aa8990",
    testEncrypt "VarTxt-84"  zeroKey "fffffffffffffffffffff00000000000" "a5e652614c9300f37816b1f9fd0c87f9",
    testEncrypt "VarTxt-85"  zeroKey "fffffffffffffffffffff80000000000" "14954f0b4697776f44494fe458d814ed",
    testEncrypt "VarTxt-86"  zeroKey "fffffffffffffffffffffc0000000000" "7c8d9ab6c2761723fe42f8bb506cbcf7",
    testEncrypt "VarTxt-87"  zeroKey "fffffffffffffffffffffe0000000000" "db7e1932679fdd99742aab04aa0d5a80",
    testEncrypt "VarTxt-88"  zeroKey "ffffffffffffffffffffff0000000000" "4c6a1c83e568cd10f27c2d73ded19c28",
    testEncrypt "VarTxt-89"  zeroKey "ffffffffffffffffffffff8000000000" "90ecbe6177e674c98de412413f7ac915",
    testEncrypt "VarTxt-90"  zeroKey "ffffffffffffffffffffffc000000000" "90684a2ac55fe1ec2b8ebd5622520b73",
    testEncrypt "VarTxt-91"  zeroKey "ffffffffffffffffffffffe000000000" "7472f9a7988607ca79707795991035e6",
    testEncrypt "VarTxt-92"  zeroKey "fffffffffffffffffffffff000000000" "56aff089878bf3352f8df172a3ae47d8",
    testEncrypt "VarTxt-93"  zeroKey "fffffffffffffffffffffff800000000" "65c0526cbe40161b8019a2a3171abd23",
    testEncrypt "VarTxt-94"  zeroKey "fffffffffffffffffffffffc00000000" "377be0be33b4e3e310b4aabda173f84f",
    testEncrypt "VarTxt-95"  zeroKey "fffffffffffffffffffffffe00000000" "9402e9aa6f69de6504da8d20c4fcaa2f",
    testEncrypt "VarTxt-96"  zeroKey "ffffffffffffffffffffffff00000000" "123c1f4af313ad8c2ce648b2e71fb6e1",
    testEncrypt "VarTxt-97"  zeroKey "ffffffffffffffffffffffff80000000" "1ffc626d30203dcdb0019fb80f726cf4",
    testEncrypt "VarTxt-98"  zeroKey "ffffffffffffffffffffffffc0000000" "76da1fbe3a50728c50fd2e621b5ad885",
    testEncrypt "VarTxt-99"  zeroKey "ffffffffffffffffffffffffe0000000" "082eb8be35f442fb52668e16a591d1d6",
    testEncrypt "VarTxt-100" zeroKey "fffffffffffffffffffffffff0000000" "e656f9ecf5fe27ec3e4a73d00c282fb3",
    testEncrypt "VarTxt-101" zeroKey "fffffffffffffffffffffffff8000000" "2ca8209d63274cd9a29bb74bcd77683a",
    testEncrypt "VarTxt-102" zeroKey "fffffffffffffffffffffffffc000000" "79bf5dce14bb7dd73a8e3611de7ce026",
    testEncrypt "VarTxt-103" zeroKey "fffffffffffffffffffffffffe000000" "3c849939a5d29399f344c4a0eca8a576",
    testEncrypt "VarTxt-104" zeroKey "ffffffffffffffffffffffffff000000" "ed3c0a94d59bece98835da7aa4f07ca2",
    testEncrypt "VarTxt-105" zeroKey "ffffffffffffffffffffffffff800000" "63919ed4ce10196438b6ad09d99cd795",
    testEncrypt "VarTxt-106" zeroKey "ffffffffffffffffffffffffffc00000" "7678f3a833f19fea95f3c6029e2bc610",
    testEncrypt "VarTxt-107" zeroKey "ffffffffffffffffffffffffffe00000" "3aa426831067d36b92be7c5f81c13c56",
    testEncrypt "VarTxt-108" zeroKey "fffffffffffffffffffffffffff00000" "9272e2d2cdd11050998c845077a30ea0",
    testEncrypt "VarTxt-109" zeroKey "fffffffffffffffffffffffffff80000" "088c4b53f5ec0ff814c19adae7f6246c",
    testEncrypt "VarTxt-110" zeroKey "fffffffffffffffffffffffffffc0000" "4010a5e401fdf0a0354ddbcc0d012b17",
    testEncrypt "VarTxt-111" zeroKey "fffffffffffffffffffffffffffe0000" "a87a385736c0a6189bd6589bd8445a93",
    testEncrypt "VarTxt-112" zeroKey "ffffffffffffffffffffffffffff0000" "545f2b83d9616dccf60fa9830e9cd287",
    testEncrypt "VarTxt-113" zeroKey "ffffffffffffffffffffffffffff8000" "4b706f7f92406352394037a6d4f4688d",
    testEncrypt "VarTxt-114" zeroKey "ffffffffffffffffffffffffffffc000" "b7972b3941c44b90afa7b264bfba7387",
    testEncrypt "VarTxt-115" zeroKey "ffffffffffffffffffffffffffffe000" "6f45732cf10881546f0fd23896d2bb60",
    testEncrypt "VarTxt-116" zeroKey "fffffffffffffffffffffffffffff000" "2e3579ca15af27f64b3c955a5bfc30ba",
    testEncrypt "VarTxt-117" zeroKey "fffffffffffffffffffffffffffff800" "34a2c5a91ae2aec99b7d1b5fa6780447",
    testEncrypt "VarTxt-118" zeroKey "fffffffffffffffffffffffffffffc00" "a4d6616bd04f87335b0e53351227a9ee",
    testEncrypt "VarTxt-119" zeroKey "fffffffffffffffffffffffffffffe00" "7f692b03945867d16179a8cefc83ea3f",
    testEncrypt "VarTxt-120" zeroKey "ffffffffffffffffffffffffffffff00" "3bd141ee84a0e6414a26e7a4f281f8a2",
    testEncrypt "VarTxt-121" zeroKey "ffffffffffffffffffffffffffffff80" "d1788f572d98b2b16ec5d5f3922b99bc",
    testEncrypt "VarTxt-122" zeroKey "ffffffffffffffffffffffffffffffc0" "0833ff6f61d98a57b288e8c3586b85a6",
    testEncrypt "VarTxt-123" zeroKey "ffffffffffffffffffffffffffffffe0" "8568261797de176bf0b43becc6285afb",
    testEncrypt "VarTxt-124" zeroKey "fffffffffffffffffffffffffffffff0" "f9b0fda0c4a898f5b9e6f661c4ce4d07",
    testEncrypt "VarTxt-125" zeroKey "fffffffffffffffffffffffffffffff8" "8ade895913685c67c5269f8aae42983e",
    testEncrypt "VarTxt-126" zeroKey "fffffffffffffffffffffffffffffffc" "39bde67d5c8ed8a8b1c37eb8fa9f5ac0"
  ]
  tests.foldlM (fun n t => do let b ← t; pure (n + if b then 1 else 0)) 0

-- ═══════════════════════════════════════════════
-- VarKey Tests (126 Vektoren, PT = 0)
-- ═══════════════════════════════════════════════
def runVarKey : IO Nat :=
  let zeroPt := "00000000000000000000000000000000"
  let tests : List (IO Bool) := [
    testEncrypt "VarKey-1"   "80000000000000000000000000000000" zeroPt "0edd33d3c621e546455bd8ba1418bec8",
    testEncrypt "VarKey-2"   "c0000000000000000000000000000000" zeroPt "4bc3f883450c113c64ca42e1112a9e87",
    testEncrypt "VarKey-3"   "e0000000000000000000000000000000" zeroPt "72a1da770f5d7ac4c9ef94d822affd97",
    testEncrypt "VarKey-4"   "f0000000000000000000000000000000" zeroPt "970014d634e2b7650777e8e84d03ccd8",
    testEncrypt "VarKey-5"   "f8000000000000000000000000000000" zeroPt "f17e79aed0db7e279e955b5f493875a7",
    testEncrypt "VarKey-6"   "fc000000000000000000000000000000" zeroPt "9ed5a75136a940d0963da379db4af26a",
    testEncrypt "VarKey-7"   "fe000000000000000000000000000000" zeroPt "c4295f83465c7755e8fa364bac6a7ea5",
    testEncrypt "VarKey-8"   "ff000000000000000000000000000000" zeroPt "b1d758256b28fd850ad4944208cf1155",
    testEncrypt "VarKey-9"   "ff800000000000000000000000000000" zeroPt "42ffb34c743de4d88ca38011c990890b",
    testEncrypt "VarKey-10"  "ffc00000000000000000000000000000" zeroPt "9958f0ecea8b2172c0c1995f9182c0f3",
    testEncrypt "VarKey-11"  "ffe00000000000000000000000000000" zeroPt "956d7798fac20f82a8823f984d06f7f5",
    testEncrypt "VarKey-12"  "fff00000000000000000000000000000" zeroPt "a01bf44f2d16be928ca44aaf7b9b106b",
    testEncrypt "VarKey-13"  "fff80000000000000000000000000000" zeroPt "b5f1a33e50d40d103764c76bd4c6b6f8",
    testEncrypt "VarKey-14"  "fffc0000000000000000000000000000" zeroPt "2637050c9fc0d4817e2d69de878aee8d",
    testEncrypt "VarKey-15"  "fffe0000000000000000000000000000" zeroPt "113ecbe4a453269a0dd26069467fb5b5",
    testEncrypt "VarKey-16"  "ffff0000000000000000000000000000" zeroPt "97d0754fe68f11b9e375d070a608c884",
    testEncrypt "VarKey-17"  "ffff8000000000000000000000000000" zeroPt "c6a0b3e998d05068a5399778405200b4",
    testEncrypt "VarKey-18"  "ffffc000000000000000000000000000" zeroPt "df556a33438db87bc41b1752c55e5e49",
    testEncrypt "VarKey-19"  "ffffe000000000000000000000000000" zeroPt "90fb128d3a1af6e548521bb962bf1f05",
    testEncrypt "VarKey-20"  "fffff000000000000000000000000000" zeroPt "26298e9c1db517c215fadfb7d2a8d691",
    testEncrypt "VarKey-21"  "fffff800000000000000000000000000" zeroPt "a6cb761d61f8292d0df393a279ad0380",
    testEncrypt "VarKey-22"  "fffffc00000000000000000000000000" zeroPt "12acd89b13cd5f8726e34d44fd486108",
    testEncrypt "VarKey-23"  "fffffe00000000000000000000000000" zeroPt "95b1703fc57ba09fe0c3580febdd7ed4",
    testEncrypt "VarKey-24"  "ffffff00000000000000000000000000" zeroPt "de11722d893e9f9121c381becc1da59a",
    testEncrypt "VarKey-25"  "ffffff80000000000000000000000000" zeroPt "6d114ccb27bf391012e8974c546d9bf2",
    testEncrypt "VarKey-26"  "ffffffc0000000000000000000000000" zeroPt "5ce37e17eb4646ecfac29b9cc38d9340",
    testEncrypt "VarKey-27"  "ffffffe0000000000000000000000000" zeroPt "18c1b6e2157122056d0243d8a165cddb",
    testEncrypt "VarKey-28"  "fffffff0000000000000000000000000" zeroPt "99693e6a59d1366c74d823562d7e1431",
    testEncrypt "VarKey-29"  "fffffff8000000000000000000000000" zeroPt "6c7c64dc84a8bba758ed17eb025a57e3",
    testEncrypt "VarKey-30"  "fffffffc000000000000000000000000" zeroPt "e17bc79f30eaab2fac2cbbe3458d687a",
    testEncrypt "VarKey-31"  "fffffffe000000000000000000000000" zeroPt "1114bc2028009b923f0b01915ce5e7c4",
    testEncrypt "VarKey-32"  "ffffffff000000000000000000000000" zeroPt "9c28524a16a1e1c1452971caa8d13476",
    testEncrypt "VarKey-33"  "ffffffff800000000000000000000000" zeroPt "ed62e16363638360fdd6ad62112794f0",
    testEncrypt "VarKey-34"  "ffffffffc00000000000000000000000" zeroPt "5a8688f0b2a2c16224c161658ffd4044",
    testEncrypt "VarKey-35"  "ffffffffe00000000000000000000000" zeroPt "23f710842b9bb9c32f26648c786807ca",
    testEncrypt "VarKey-36"  "fffffffff00000000000000000000000" zeroPt "44a98bf11e163f632c47ec6a49683a89",
    testEncrypt "VarKey-37"  "fffffffff80000000000000000000000" zeroPt "0f18aff94274696d9b61848bd50ac5e5",
    testEncrypt "VarKey-38"  "fffffffffc0000000000000000000000" zeroPt "82408571c3e2424540207f833b6dda69",
    testEncrypt "VarKey-39"  "fffffffffe0000000000000000000000" zeroPt "303ff996947f0c7d1f43c8f3027b9b75",
    testEncrypt "VarKey-40"  "ffffffffff0000000000000000000000" zeroPt "7df4daf4ad29a3615a9b6ece5c99518a",
    testEncrypt "VarKey-41"  "ffffffffff8000000000000000000000" zeroPt "c72954a48d0774db0b4971c526260415",
    testEncrypt "VarKey-42"  "ffffffffffc000000000000000000000" zeroPt "1df9b76112dc6531e07d2cfda04411f0",
    testEncrypt "VarKey-43"  "ffffffffffe000000000000000000000" zeroPt "8e4d8e699119e1fc87545a647fb1d34f",
    testEncrypt "VarKey-44"  "fffffffffff000000000000000000000" zeroPt "e6c4807ae11f36f091c57d9fb68548d1",
    testEncrypt "VarKey-45"  "fffffffffff800000000000000000000" zeroPt "8ebf73aad49c82007f77a5c1ccec6ab4",
    testEncrypt "VarKey-46"  "fffffffffffc00000000000000000000" zeroPt "4fb288cc2040049001d2c7585ad123fc",
    testEncrypt "VarKey-47"  "fffffffffffe00000000000000000000" zeroPt "04497110efb9dceb13e2b13fb4465564",
    testEncrypt "VarKey-48"  "ffffffffffff00000000000000000000" zeroPt "75550e6cb5a88e49634c9ab69eda0430",
    testEncrypt "VarKey-49"  "ffffffffffff80000000000000000000" zeroPt "b6768473ce9843ea66a81405dd50b345",
    testEncrypt "VarKey-50"  "ffffffffffffc0000000000000000000" zeroPt "cb2f430383f9084e03a653571e065de6",
    testEncrypt "VarKey-51"  "ffffffffffffe0000000000000000000" zeroPt "ff4e66c07bae3e79fb7d210847a3b0ba",
    testEncrypt "VarKey-52"  "fffffffffffff0000000000000000000" zeroPt "7b90785125505fad59b13c186dd66ce3",
    testEncrypt "VarKey-53"  "fffffffffffff8000000000000000000" zeroPt "8b527a6aebdaec9eaef8eda2cb7783e5",
    testEncrypt "VarKey-54"  "fffffffffffffc000000000000000000" zeroPt "43fdaf53ebbc9880c228617d6a9b548b",
    testEncrypt "VarKey-55"  "fffffffffffffe000000000000000000" zeroPt "53786104b9744b98f052c46f1c850d0b",
    testEncrypt "VarKey-56"  "ffffffffffffff000000000000000000" zeroPt "b5ab3013dd1e61df06cbaf34ca2aee78",
    testEncrypt "VarKey-57"  "ffffffffffffff800000000000000000" zeroPt "7470469be9723030fdcc73a8cd4fbb10",
    testEncrypt "VarKey-58"  "ffffffffffffffc00000000000000000" zeroPt "a35a63f5343ebe9ef8167bcb48ad122e",
    testEncrypt "VarKey-59"  "ffffffffffffffe00000000000000000" zeroPt "fd8687f0757a210e9fdf181204c30863",
    testEncrypt "VarKey-60"  "fffffffffffffff00000000000000000" zeroPt "7a181e84bd5457d26a88fbae96018fb0",
    testEncrypt "VarKey-61"  "fffffffffffffff80000000000000000" zeroPt "653317b9362b6f9b9e1a580e68d494b5",
    testEncrypt "VarKey-62"  "fffffffffffffffc0000000000000000" zeroPt "995c9dc0b689f03c45867b5faa5c18d1",
    testEncrypt "VarKey-63"  "fffffffffffffffe0000000000000000" zeroPt "77a4d96d56dda398b9aabecfc75729fd",
    testEncrypt "VarKey-64"  "ffffffffffffffff0000000000000000" zeroPt "84be19e053635f09f2665e7bae85b42d",
    testEncrypt "VarKey-65"  "ffffffffffffffff8000000000000000" zeroPt "32cd652842926aea4aa6137bb2be2b5e",
    testEncrypt "VarKey-66"  "ffffffffffffffffc000000000000000" zeroPt "493d4a4f38ebb337d10aa84e9171a554",
    testEncrypt "VarKey-67"  "ffffffffffffffffe000000000000000" zeroPt "d9bff7ff454b0ec5a4a2a69566e2cb84",
    testEncrypt "VarKey-68"  "fffffffffffffffff000000000000000" zeroPt "3535d565ace3f31eb249ba2cc6765d7a",
    testEncrypt "VarKey-69"  "fffffffffffffffff800000000000000" zeroPt "f60e91fc3269eecf3231c6e9945697c6",
    testEncrypt "VarKey-70"  "fffffffffffffffffc00000000000000" zeroPt "ab69cfadf51f8e604d9cc37182f6635a",
    testEncrypt "VarKey-71"  "fffffffffffffffffe00000000000000" zeroPt "7866373f24a0b6ed56e0d96fcdafb877",
    testEncrypt "VarKey-72"  "ffffffffffffffffff00000000000000" zeroPt "1ea448c2aac954f5d812e9d78494446a",
    testEncrypt "VarKey-73"  "ffffffffffffffffff80000000000000" zeroPt "acc5599dd8ac02239a0fef4a36dd1668",
    testEncrypt "VarKey-74"  "ffffffffffffffffffc0000000000000" zeroPt "d8764468bb103828cf7e1473ce895073",
    testEncrypt "VarKey-75"  "ffffffffffffffffffe0000000000000" zeroPt "1b0d02893683b9f180458e4aa6b73982",
    testEncrypt "VarKey-76"  "fffffffffffffffffff0000000000000" zeroPt "96d9b017d302df410a937dcdb8bb6e43",
    testEncrypt "VarKey-77"  "fffffffffffffffffff8000000000000" zeroPt "ef1623cc44313cff440b1594a7e21cc6",
    testEncrypt "VarKey-78"  "fffffffffffffffffffc000000000000" zeroPt "284ca2fa35807b8b0ae4d19e11d7dbd7",
    testEncrypt "VarKey-79"  "fffffffffffffffffffe000000000000" zeroPt "f2e976875755f9401d54f36e2a23a594",
    testEncrypt "VarKey-80"  "ffffffffffffffffffff000000000000" zeroPt "ec198a18e10e532403b7e20887c8dd80",
    testEncrypt "VarKey-81"  "ffffffffffffffffffff800000000000" zeroPt "545d50ebd919e4a6949d96ad47e46a80",
    testEncrypt "VarKey-82"  "ffffffffffffffffffffc00000000000" zeroPt "dbdfb527060e0a71009c7bb0c68f1d44",
    testEncrypt "VarKey-83"  "ffffffffffffffffffffe00000000000" zeroPt "9cfa1322ea33da2173a024f2ff0d896d",
    testEncrypt "VarKey-84"  "fffffffffffffffffffff00000000000" zeroPt "8785b1a75b0f3bd958dcd0e29318c521",
    testEncrypt "VarKey-85"  "fffffffffffffffffffff80000000000" zeroPt "38f67b9e98e4a97b6df030a9fcdd0104",
    testEncrypt "VarKey-86"  "fffffffffffffffffffffc0000000000" zeroPt "192afffb2c880e82b05926d0fc6c448b",
    testEncrypt "VarKey-87"  "fffffffffffffffffffffe0000000000" zeroPt "6a7980ce7b105cf530952d74daaf798c",
    testEncrypt "VarKey-88"  "ffffffffffffffffffffff0000000000" zeroPt "ea3695e1351b9d6858bd958cf513ef6c",
    testEncrypt "VarKey-89"  "ffffffffffffffffffffff8000000000" zeroPt "6da0490ba0ba0343b935681d2cce5ba1",
    testEncrypt "VarKey-90"  "ffffffffffffffffffffffc000000000" zeroPt "f0ea23af08534011c60009ab29ada2f1",
    testEncrypt "VarKey-91"  "ffffffffffffffffffffffe000000000" zeroPt "ff13806cf19cc38721554d7c0fcdcd4b",
    testEncrypt "VarKey-92"  "fffffffffffffffffffffff000000000" zeroPt "6838af1f4f69bae9d85dd188dcdf0688",
    testEncrypt "VarKey-93"  "fffffffffffffffffffffff800000000" zeroPt "36cf44c92d550bfb1ed28ef583ddf5d7",
    testEncrypt "VarKey-94"  "fffffffffffffffffffffffc00000000" zeroPt "d06e3195b5376f109d5c4ec6c5d62ced",
    testEncrypt "VarKey-95"  "fffffffffffffffffffffffe00000000" zeroPt "c440de014d3d610707279b13242a5c36",
    testEncrypt "VarKey-96"  "ffffffffffffffffffffffff00000000" zeroPt "f0c5c6ffa5e0bd3a94c88f6b6f7c16b9",
    testEncrypt "VarKey-97"  "ffffffffffffffffffffffff80000000" zeroPt "3e40c3901cd7effc22bffc35dee0b4d9",
    testEncrypt "VarKey-98"  "ffffffffffffffffffffffffc0000000" zeroPt "b63305c72bedfab97382c406d0c49bc6",
    testEncrypt "VarKey-99"  "ffffffffffffffffffffffffe0000000" zeroPt "36bbaab22a6bd4925a99a2b408d2dbae",
    testEncrypt "VarKey-100" "fffffffffffffffffffffffff0000000" zeroPt "307c5b8fcd0533ab98bc51e27a6ce461",
    testEncrypt "VarKey-101" "fffffffffffffffffffffffff8000000" zeroPt "829c04ff4c07513c0b3ef05c03e337b5",
    testEncrypt "VarKey-102" "fffffffffffffffffffffffffc000000" zeroPt "f17af0e895dda5eb98efc68066e84c54",
    testEncrypt "VarKey-103" "fffffffffffffffffffffffffe000000" zeroPt "277167f3812afff1ffacb4a934379fc3",
    testEncrypt "VarKey-104" "ffffffffffffffffffffffffff000000" zeroPt "2cb1dc3a9c72972e425ae2ef3eb597cd",
    testEncrypt "VarKey-105" "ffffffffffffffffffffffffff800000" zeroPt "36aeaa3a213e968d4b5b679d3a2c97fe",
    testEncrypt "VarKey-106" "ffffffffffffffffffffffffffc00000" zeroPt "9241daca4fdd034a82372db50e1a0f3f",
    testEncrypt "VarKey-107" "ffffffffffffffffffffffffffe00000" zeroPt "c14574d9cd00cf2b5a7f77e53cd57885",
    testEncrypt "VarKey-108" "fffffffffffffffffffffffffff00000" zeroPt "793de39236570aba83ab9b737cb521c9",
    testEncrypt "VarKey-109" "fffffffffffffffffffffffffff80000" zeroPt "16591c0f27d60e29b85a96c33861a7ef",
    testEncrypt "VarKey-110" "fffffffffffffffffffffffffffc0000" zeroPt "44fb5c4d4f5cb79be5c174a3b1c97348",
    testEncrypt "VarKey-111" "fffffffffffffffffffffffffffe0000" zeroPt "674d2b61633d162be59dde04222f4740",
    testEncrypt "VarKey-112" "ffffffffffffffffffffffffffff0000" zeroPt "b4750ff263a65e1f9e924ccfd98f3e37",
    testEncrypt "VarKey-113" "ffffffffffffffffffffffffffff8000" zeroPt "62d0662d6eaeddedebae7f7ea3a4f6b6",
    testEncrypt "VarKey-114" "ffffffffffffffffffffffffffffc000" zeroPt "70c46bb30692be657f7eaa93ebad9897",
    testEncrypt "VarKey-115" "ffffffffffffffffffffffffffffe000" zeroPt "323994cfb9da285a5d9642e1759b224a",
    testEncrypt "VarKey-116" "fffffffffffffffffffffffffffff000" zeroPt "1dbf57877b7b17385c85d0b54851e371",
    testEncrypt "VarKey-117" "fffffffffffffffffffffffffffff800" zeroPt "dfa5c097cdc1532ac071d57b1d28d1bd",
    testEncrypt "VarKey-118" "fffffffffffffffffffffffffffffc00" zeroPt "3a0c53fa37311fc10bd2a9981f513174",
    testEncrypt "VarKey-119" "fffffffffffffffffffffffffffffe00" zeroPt "ba4f970c0a25c41814bdae2e506be3b4",
    testEncrypt "VarKey-120" "ffffffffffffffffffffffffffffff00" zeroPt "2dce3acb727cd13ccd76d425ea56e4f6",
    testEncrypt "VarKey-121" "ffffffffffffffffffffffffffffff80" zeroPt "5160474d504b9b3eefb68d35f245f4b3",
    testEncrypt "VarKey-122" "ffffffffffffffffffffffffffffffc0" zeroPt "41a8a947766635dec37553d9a6c0cbb7",
    testEncrypt "VarKey-123" "ffffffffffffffffffffffffffffffe0" zeroPt "25d6cfe6881f2bf497dd14cd4ddf445b",
    testEncrypt "VarKey-124" "fffffffffffffffffffffffffffffff0" zeroPt "41c78c135ed9e98c096640647265da1e",
    testEncrypt "VarKey-125" "fffffffffffffffffffffffffffffff8" zeroPt "5a4d404d8917e353e92a21072c3b2305",
    testEncrypt "VarKey-126" "fffffffffffffffffffffffffffffffc" zeroPt "02bc96846b3fdc71643f384cd3cc3eaf"
  ]
  tests.foldlM (fun n t => do let b ← t; pure (n + if b then 1 else 0)) 0

-- ═══════════════════════════════════════════════
-- Roundtrip Test (pure)
-- ═══════════════════════════════════════════════

def runRoundtrip : Bool :=
  let key := hexToBlock "2b7e151628aed2a6abf7158809cf4f3c"
  let pt  := hexToBlock "3243f6a8885a308d313198a2e0370734"
  aesDecrypt (aesEncrypt pt key) key == pt

def benchmarkEncrypt (n : Nat) : IO Unit := do
  let key := hexToBlock "2b7e151628aed2a6abf7158809cf4f3c"
  let pt  := hexToBlock "3243f6a8885a308d313198a2e0370734"
  let _   : Block := (List.range n).foldl (fun _ _ => aesEncrypt pt key) pt
  IO.println s!"{n} Verschlüsselungen abgeschlossen"

-- ═══════════════════════════════════════════════
-- Hauptprogramm
-- ═══════════════════════════════════════════════

def main : IO Unit := do
  IO.println "╔══════════════════════════════════════════════╗"
  IO.println "║  AES-128 Lean 4 — AESAVS Validation Suite   ║"
  IO.println "╚══════════════════════════════════════════════╝"
  IO.println ""
  IO.print "GFSbox  (7×2 Tests):  "
  let g ← runGFSbox
  IO.println s!"{g}/14 bestanden"

  IO.print "KeySbox (21×2 Tests): "
  let k ← runKeySbox
  IO.println s!"{k}/42 bestanden"

  IO.print "VarTxt  (126 Tests):  "
  let v ← runVarTxt
  IO.println s!"{v}/126 bestanden"

  IO.print "VarKey  (126 Tests):  "
  let vk ← runVarKey
  IO.println s!"{vk}/126 bestanden"

  IO.print "Roundtrip:            "
  let r := runRoundtrip
  IO.println s!"{r}"

  let total := g + k + v + vk + (if r then 1 else 0)
  let expected := 14 + 42 + 126 + 126 + 1
  IO.println ""
  IO.println s!"═══ Gesamt: {total}/{expected} bestanden ═══"
  benchmarkEncrypt 1000000
