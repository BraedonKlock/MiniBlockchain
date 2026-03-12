# MiniBlockchain
Mini Blockchain is a C++ project that simulates the core ideas behind a blockchain-style ledger system.

-------------------------------------

# Project directories
.
├── CMakeLists.txt
├── includes
│   ├── Account.h
│   ├── ledger
│   │   ├── Ledger.h
│   │   ├── LedgerSnapshot.h
│   │   └── LedgerState.h
│   └── transactions
│       ├── CreateAccountTransaction.h
│       ├── DeleteAccountTransaction.h
│       ├── Transaction.h
│       └── TransactionStatus.h
├── README.md
└── src
    ├── Account.cpp
    ├── ledger
    │   ├── Ledger.cpp
    │   ├── LedgerSnapshot.cpp
    │   └── LedgerState.cpp
    ├── Main.cpp
    └── transactions
        ├── CreateAccountTransaction.cpp
        ├── DeleteAccountTransaction.cpp
        └── Transaction.cpp

