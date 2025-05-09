

##  **8.1 – Array-Based Binary Tree**

###  Concept:

* The binary tree is stored in a **fixed-size array** `BT[NUMNODES]`.
* Each node stores:

  * `info`: value
  * `left`, `right`: indices of its children
  * `parent`: index of its parent

###  Why index-based?

This approach uses the **mathematical formula** for binary trees stored in arrays:

* Left child of node at `i`: `2*i`
* Right child of node at `i`: `2*i + 1`
* Parent of node at `i`: `i/2` (for complete binary trees)

###  Key Functions:

* `setRoot(value)` → sets the root at index `1`.
* `insertLeft(parentIndex, value)` → adds left child at `2 * parentIndex`.
* `insertRight(parentIndex, value)` → adds right child at `2 * parentIndex + 1`.
* `inorder()`, `preorder()`, `postorder()` → traverse tree recursively using the indices.

###  Output for provided `main()`:

```
Inorder: 40 20 50 10 60 30 70 
Preorder: 10 20 40 50 30 60 70 
Postorder: 40 50 20 60 70 30 10 
```

---

##  **8.2 – Linked List–Based Binary Tree**

###  Concept:

* The tree uses **pointers** instead of array indices.
* Each node is dynamically created and connected using pointers to its:

  * `left`, `right`, and `parent`.

###  Why pointer-based?

* More flexible than array version.
* Can grow dynamically without wasting space.
* Suitable for unbalanced or sparse trees.

###  Key Functions:

* `makeTree(x)` → creates a new node with value `x`.
* `setRoot(x)` → creates and sets the root node.
* `setLeft(p, x)` / `setRight(p, x)` → adds child to given node `p`.
* `isLeft(p)` / `isRight(p)` → check if node is left/right child.
* `pretrav(p)`, `intrav(p)`, `posttrav(p)` → traversal using pointers.

###  Output for provided `main()`:

```
Preorder: 10 5 2 7 15 
Inorder: 2 5 7 10 15 
Postorder: 2 7 5 15 10 
```

---

## **Comparison:**

| Feature      | Array-Based                      | Linked List–Based                |
| ------------ | -------------------------------- | -------------------------------- |
| Memory       | Fixed size, pre-allocated        | Dynamic, uses only needed memory |
| Flexibility  | Rigid (can't grow/shrink easily) | Very flexible                    |
| Indexing     | Easy math-based access           | Uses pointers                    |
| Suitable for | Complete binary trees            | Any binary tree                  |

