

#  Doubly Linked List Implementation in C++

This program provides a templated implementation of a **doubly linked list** in C++. The list supports various standard operations including insertion and deletion from both ends. It can also be initialized directly from an array.

---

##  Features

* Generic implementation using C++ templates (works with any data type)
* Insert at front (`push_front`)
* Insert at back (`push_back`)
* Remove from front (`pop_front`)
* Remove from back (`pop_back`)
* Initialize list from an array
* Check if the list is empty
* Memory cleanup via destructor

---

##  Class Structure

### `class double_linked<T>`

* **Node Struct**: Contains `data`, `prev`, and `next` pointers

* **Private Members**:

  * `node* head` – pointer to the first node
  * `node* tail` – pointer to the last node

* **Public Methods**:

  * `double_linked()` – Default constructor
  * `double_linked(T(&arr)[N])` – Constructor to initialize list from array
  * `bool empty()` – Check if the list is empty
  * `operator bool()` – Returns true if list is not empty
  * `void push_front(T)` – Insert at beginning
  * `void push_back(T)` – Insert at end
  * `T pop_front()` – Remove and return front item
  * `T pop_back()` – Remove and return last item
  * `~double_linked()` – Destructor to free memory

---

##  Example Usage

```cpp
long long arr[] = { 1000000000001, 2000000000002, 3000000000003, 4000000000004 };
double_linked<long long> dlist(arr);

dlist.push_back(5000000000005);
dlist.push_front(9999999999999);

while (dlist)
    cout << dlist.pop_front() << " ";
```

**Output:**

```
9999999999999 1000000000001 2000000000002 3000000000003 4000000000004 5000000000005
```

---

##  How It Works

* Nodes are dynamically allocated and connected in both directions using `prev` and `next`.
* The list grows or shrinks from either side without the need for shifting elements (unlike arrays).
* Memory is automatically freed when the list is destroyed.

---

##  Notes

* The list is safe against underflow — trying to pop from an empty list throws an error.
* Initialization with large numbers is supported (as shown using `long long`).
* This is a minimal, pointer-based implementation for learning and demonstration purposes.


