
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
def cipher (input : Block) (ks : KeySchedule) : Block := Id.run do
  let mut s := blockToState input
  s := addRoundKey s ks[0]!
  for i in [1:10] do
    s := aesRound s ks[i]!
  s := aesFinalRound s ks[10]!
  return stateToBlock s

/-- AES-128 Entschlüsselung -/
def invCipher (input : Block) (ks : KeySchedule) : Block := Id.run do
  let mut s := blockToState input
  s := addRoundKey s ks[10]!
  for i in [1:10] do
    s := invAesRound s ks[10 - i]!
  s := invAesFinalRound s ks[0]!
  return stateToBlock s

def aesEncrypt (plaintext key : Block) : Block := cipher plaintext (expandKey key)
def aesDecrypt (ciphertext key : Block) : Block := invCipher ciphertext (expandKey key)
