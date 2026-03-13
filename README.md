# Ledger

Ledger is a C++ project that simulates a simplified ledger system.

The program allows users to create and delete accounts, send money between accounts, validate transactions based on account existence and available funds, and preserve both the current ledger state and historical snapshots for reference.

---

## Features

- Create accounts
- Delete accounts
- Send money between accounts
- Validate transactions by checking:
  - whether the sender account exists
  - whether the receiver account exists
  - whether the sender has enough funds
- Maintain the current ledger state
- Store ledger snapshots for history

---

## Project Purpose

The purpose of this project is to practice core C++ concepts through a ledger-based system.

Some of the concepts this project is intended to reinforce include:

- classes and objects
- abstraction
- inheritance
- polymorphism
- smart pointers
- const correctness
- passing by reference
- state management
- clean file organization with header and source files

---

## How It Works

The ledger keeps track of accounts and their balances.

Users can interact with the program through a console menu to perform actions such as creating an account, deleting an account, and sending money.

When a transaction is submitted, the system validates it before applying any changes. For example, a payment transaction is only accepted if the accounts involved exist and the sender has sufficient funds.

The program also stores the current state of the ledger and preserves snapshots so that past states can be reviewed as part of the ledger’s history.

---

## Technologies

- C++
- CMake

---

# Project directories
```text
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

