

## GraphMatrix - Adjacency Matrix Representation of a Weighted Graph

### 📌 Description

This C++ program implements a **weighted directed graph** using an **adjacency matrix**. It provides basic functionality to:

* Initialize the graph with a fixed number of vertices
* Add weighted edges between vertices
* Display the graph as an adjacency matrix

> Note: By default, the graph is **directed**. You can make it undirected by enabling a line in the code (commented in the `addEdge` function).

---

### 🧠 How It Works

* The graph is stored in a 2D array `adj[MAX][MAX]`, where `MAX = 10`.
* Initially, all cells are set to `-1` to indicate **no edge**.
* When an edge is added using `addEdge(u, v, wt)`, the weight is stored in `adj[u][v]`.

---

### 🔧 Features

* Custom class `GraphMatrix` for graph management
* Supports **weighted** edges
* Prints a clear adjacency matrix view
* Simple and beginner-friendly

---

### 📌 Output Example

If you add the following edges:

```cpp
gm.addEdge(0, 1, 10);
gm.addEdge(0, 2, 20);
gm.addEdge(1, 3, 30);
```

The output will be:

```
Adjacency Matrix:
0 10 20 0
0 0 0 30
0 0 0 0
0 0 0 0
```

---

### 📁 File Structure

```
GraphMatrix.cpp   # Main program with GraphMatrix class and main() function
README.md         # This file
```

---

### 💡 How to Use

1. Compile the program:

   ```
   g++ GraphMatrix.cpp -o graph
   ```

2. Run the executable:

   ```
   ./graph
   ```

---

### ✏️ To Make It an Undirected Graph

In the `addEdge` function, uncomment this line:

```cpp
adj[v][u] = wt;
```

This will add edges in both directions (u → v and v → u).

---

