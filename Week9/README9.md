
#  Binary Search Tree (BST) Template in C++

##  Description

This project implements a **template-based Binary Search Tree (BST)** in C++ that supports common operations like insertion, deletion, retrieval, traversal, and destruction. It also includes a sample program that sorts an array of strings using this BST and writes the sorted output to a file.

---

##  File Structure

* **`main.cpp`**
  Contains:

  * BST class template (`TreeType`)
  * All core tree functionalities
  * `main()` function demonstrating string sorting via BST

* **`out.txt`**
  Output file where the sorted strings are written (generated after running the program).

---

##  Features

*  **Template Support** – Works with any data type (`int`, `float`, `string`, etc.)
*  **InsertItem** – Insert nodes following BST rules
*  **RetrieveItem** – Search for a value
*  **DeleteItem** – Delete node (handles 0, 1, or 2 children)
*  **PrintTree** – Inorder traversal to print sorted data
*  **Destroy Tree** – Recursively frees memory
*  **Count Nodes** – Counts total number of nodes
*  **IsEmpty / IsFull** – Checks tree state (basic logic)

---

##  Example Use Case (Sorting Strings)

```cpp
string emaarrayofstring[10] = { "Real", "Eyes", "Realise", "Real", "Lies" };

for (int i = 0; i < 5; i++) {
    tree.InsertItem(emaarrayofstring[i]);
}

ofstream outfile("out.txt");
tree.PrintTree(outfile);
outfile.close();
```

###  Output

The above strings will be sorted in ascending order and saved to **`out.txt`**.

---

##  How to Compile and Run

###  Using g++ (Linux/Mac/Windows with MinGW)

```bash
g++ main.cpp -o bst_app
./bst_app
```

After running, check the `out.txt` file for sorted output.

---

##  Notes

* In a real scenario, `IsFull()` should ideally detect memory exhaustion, but this is not practical in C++. Your implementation checks whether every node has both left and right children (which is actually checking for a **full binary tree**, not "full memory").
* You can expand the class to include traversal functions like preorder and postorder if needed.

