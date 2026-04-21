def xorBytes : List UInt8 -> List UInt8 -> List UInt8
| [], _ => []
| _, [] => []
| a :: as, b :: bs => (a ^^^ b) :: xorBytes as bs
