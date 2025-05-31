# C++ STL Examples – Chapter 12

This repository contains 11 examples demonstrating various features and containers from the C++ Standard Template Library (STL).

---

## 🔢 Example List

### ✅ Example 12.1 – `vector` + `random_shuffle`
- Stores numbers 0–24 in a vector.
- Randomly shuffles and prints them.

### ✅ Example 12.2 – `list` traversal using `pop_front`
- Uses `list<int>`.
- Inserts 0–24, then removes and prints them using `pop_front()`.

### ✅ Example 12.3 – `deque` + `random_shuffle`
- Uses a deque instead of a vector.
- Stores, shuffles, then removes and prints elements from the front.

### ✅ Example 12.4 – Stack backed by `list`
- Uses a stack implemented using `list`.
- Pushes 0–9 and prints them in LIFO order using `pop()`.

### ✅ Example 12.5 – Bit manipulation using `bitset`
- Declares a 16-bit binary number.
- Uses `~` (bitwise NOT) to flip bits.
- Prints the result.

### ✅ Example 12.6 – Search in `vector`
- Searches for the value 37 in a vector of size 100.
- Prints index if found, else "not found".

### ✅ Example 12.7 – Set Union
- Merges two arrays: `{1, 2, 3}` and `{2, 3, 4}`.
- Uses `set_union` to combine unique values into a third vector.

### ✅ Example 12.8 – Filling arrays
- Uses `fill()` to fill part of an array with -1.
- Uses `fill_n()` to fill first 5 elements of another array.

### ✅ Example 12.9 – Accumulate for sum & product
- Uses `accumulate()` to:
  - Sum elements `{1, 2, 3, 4, 5}`.
  - Multiply elements using `times<int>()`.

### ✅ Example 12.10 – Sorting custom `String` class
- Custom string class with operator overloading.
- Shuffles a list of strings, then sorts them using `sort()`.

### ✅ Example 12.11 – Word frequency counter using `map`
- Reads input words from `cin`.
- Counts frequency using `map<string, int>`.
- Prints word-frequency pairs.

---

## 📚 Topics Covered
- STL containers: `vector`, `list`, `deque`, `stack`, `map`
- Algorithms: `random_shuffle`, `find`, `sort`, `set_union`, `fill`, `accumulate`
- Bit manipulation: `bitset`
- Functors: `times<int>()`
- Custom class sorting with operator overloading

---




