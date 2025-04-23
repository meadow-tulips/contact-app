# 📒 Contact Book (Modern C++ Project)

A simple CLI-based Contact Book built using modern C++ (C++17/20), featuring:

- Clean object-oriented design
- Smart pointers (`unique_ptr`)
- RAII-style file handling
- STL containers (`map`, `vector`)
- File I/O for persistence

---

## 🚀 Features

- ✅ Add a new contact
- ✅ Search for contacts by name
- ✅ Delete a contact
- ✅ List all contacts
- ✅ Save/load contact data from a CSV file

---

## 🧠 Concepts Used

| Concept              | Usage                                      |
|----------------------|---------------------------------------------|
| OOP (Classes, Encapsulation) | Contact and ContactBook classes |
| STL Containers       | `std::map`, `std::vector`, `std::string`  |
| Smart Pointers       | `std::unique_ptr` to manage dynamic memory |
| RAII                 | Auto file handling with constructor/destructor |
| File I/O             | Read/write CSV-style contact data          |
| Const-Correctness    | `const` member functions for safety        |

---

## 🛠️ Build & Run

### Prerequisites
- C++17 or above (tested on C++20)
- g++, clang++, or MSVC

### Compile (Linux/Mac)
```bash
g++ -std=c++17 -o contact_book main.cpp ContactBook.cpp Contact.cpp
./contact_book
