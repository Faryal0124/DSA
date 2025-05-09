# Linked List Operations in C++

##  Overview

This project demonstrates the use of **singly linked lists** and **stack operations using linked lists** in C++. It covers multiple list operations through two parts:

1. **Template-based Linked List class** (with stack functionality and string reversal)
2. **Integer Linked List class** (with element insertion and deletion features)

---

##  Part 1: Template-Based Linked List (Exercise 6.1 & 6.2)

###  Features:

* Generic class using templates.
* Stack-based operations: `push()` and `pop()`.
* Insertion after a value.
* Deletion of a specific value.
* String reversal using a stack (linked list).

###  Key Functions:

* `push(value)` – Adds a new node at the beginning (stack push).
* `pop()` – Removes and returns the top element (stack pop).
* `insertafter(oldVal, newVal)` – Inserts `newVal` after `oldVal` in the list.
* `deleteItem(value)` – Deletes the node containing `value`.
* `reversestring(string& s)` – Reverses a given string using the stack behavior.

###  Sample Output:

* Reverses a user-input string.
* Demonstrates insert, delete, and pop operations on an integer list.

---

##  Part 2: Integer Linked List (Exercise 6.3)

###  Features:

* Linked list of integers using a class `LinkedStr`.
* Dynamic list creation based on user input.
* Remove operations: first, last, or specific element.

###  Key Functions:

* `makeStr(length)` – Creates a list of user-defined length.
* `displayStr()` – Displays the list in a readable format.
* `removeFirst()` – Deletes the first element.
* `removeLast()` – Deletes the last element.
* `remove(k)` – Deletes the node containing value `k`.

###  Sample Output:

* User enters 5 values.
* Program demonstrates removal of the first, last, and a specific element.

---

##  How to Run

1. Copy the code into a `.cpp` file (e.g., `main.cpp`).
2. Compile with a C++ compiler:

   ```
   g++ main.cpp -o linkedlist
   ```
3. Run the executable:

   ```
   ./linkedlist
   ```

---

##  Learning Outcomes

* Understand how **singly linked lists** work.
* Implement **stack operations** using linked lists.
* Practice memory management with pointers and dynamic allocation.
* Learn to perform insertion and deletion operations in a linked structure.


