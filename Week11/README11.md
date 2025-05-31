
## 🚀 Graph Traversal & Dijkstra's Algorithm in C++

### 📌 Description

This C++ program demonstrates how to implement and use:

* **Graph using Adjacency Matrix**
* **Breadth-First Search (BFS)**
* **Depth-First Search (DFS)**
* **Dijkstra’s Shortest Path Algorithm**

It allows adding weighted edges, printing the adjacency matrix, and performing graph traversals and shortest-path calculations from a source node.

---

### 🧠 Concepts Covered

* **Graph Representation**: Using dynamic 2D arrays (adjacency matrix)
* **BFS Traversal**: Level-order traversal using a queue
* **DFS Traversal**: Recursive depth-first traversal
* **Dijkstra’s Algorithm**: Finds the shortest path from a source to all other nodes in a weighted graph

---

### 🧱 Features

* Supports **undirected** weighted graphs (with an option to switch to directed)
* Dynamic memory allocation for scalability
* Traverses using both **BFS** and **DFS**
* Calculates shortest distances using **Dijkstra’s algorithm**

---

### 🖥️ Output Example

For the following edges:

```cpp
g.addEdge(0, 1, 2);
g.addEdge(0, 2, 4);
g.addEdge(1, 2, 1);
g.addEdge(1, 3, 7);
g.addEdge(2, 4, 3);
g.addEdge(3, 4, 1);
```

#### Sample Output:

```
0 2 4 0 0 
2 0 1 7 0 
4 1 0 0 3 
0 7 0 0 1 
0 0 3 1 0 

BFS starting from node 0: 0 1 2 3 4 
DFS starting from node 0: 0 1 2 4 3 
Dijkstra's shortest paths from node 0:
To 0 -> Distance: 0
To 1 -> Distance: 2
To 2 -> Distance: 3
To 3 -> Distance: 9
To 4 -> Distance: 6
```

---

### ⚙️ How to Use

1. **Compile the Program**
   Use any C++ compiler like g++:

   ```
   g++ GraphAlgorithms.cpp -o graph
   ```

2. **Run the Program**

   ```
   ./graph
   ```

---

### 📝 Customization

* **Directed vs Undirected**:
  By default, the graph is **undirected**. You can pass `false` in `addEdge(u, v, weight, false)` to make a **directed edge**.

* **Change Source Node**:
  Modify the parameter in `BFS(start)`, `DFS(start)`, or `dijkstra(start)` to run algorithms from a different node.

---

### 🧹 Memory Management

The program dynamically allocates memory for the adjacency matrix and deallocates it properly in the destructor using:

```cpp
~Graph() {
    for (int i = 0; i < n; ++i)
        delete[] adjMatrix[i];
    delete[] adjMatrix;
}
```

---

### 📁 File Structure

```
GraphAlgorithms.cpp   # Contains full code with BFS, DFS, Dijkstra
README.md             # This file
```

---

