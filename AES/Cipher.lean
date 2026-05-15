
import AES.Types
import AES.Transforms
import AES.KeyExpansion

def aesRound (s : State) (rk : RoundKey) : State :=
  addRoundKey (mixColumns (shiftRows (subBytes s))) rk

def aesFinalRound (s : State) (rk : RoundKey) : State :=
  addRoundKey (shiftRows (subBytes s)) rk

def invAesRound (s : State) (rk : RoundKey) : State :=
  invMixColumns (addRoundKey (invSubBytes (invShiftRows s)) rk)

def invAesFinalRound (s : State) (rk : RoundKey) : State :=
  addRoundKey (invSubBytes (invShiftRows s)) rk

/-- AES-128 Verschlüsselung -/
def cipher (input : Block) (ks : KeySchedule) : Block :=
  let s := addRoundKey (blockToState input) ks[0]!
  let s := (List.range 9).foldl (fun acc i => aesRound acc ks[i + 1]!) s
  stateToBlock (aesFinalRound s ks[10]!)

/-- AES-128 Entschlüsselung -/
def invCipher (input : Block) (ks : KeySchedule) : Block :=
  let s := addRoundKey (blockToState input) ks[10]!
  let s := (List.range 9).foldl (fun acc i => invAesRound acc ks[9 - i]!) s
  stateToBlock (invAesFinalRound s ks[0]!)

def aesEncrypt (plaintext key : Block) : Block := cipher plaintext (expandKey key)
def aesDecrypt (ciphertext key : Block) : Block := invCipher ciphertext (expandKey key)
