

# 📊 Sorting Algorithms 

This project demonstrates the implementation and comparison of different sorting algorithms in C++. It includes both basic sorting logic and performance analysis on large data sets.



### ✅ Example 13.1 - Time Tracking

**File:** *Example13\_1.cpp*
This code tracks the time (in seconds) it takes for the user to type their name using the `time.h` library.

### ✅ Exercise 13.1 - Sorting Implementations

**File(s):** *Exercise13\_1\_Bubble.cpp*, *Exercise13\_1\_Selection.cpp*, *Exercise13\_1\_Insertion.cpp*, *Exercise13\_1\_Heap.cpp*
These files implement the following sorting algorithms on a user-defined array:

* **Bubble Sort**
* **Selection Sort**
* **Insertion Sort**
* **Heap Sort**

Each implementation takes an array of size 5 as input from the user and displays the sorted output.

### ✅ Exercise 13.2 - Sorting Performance Analysis

**File:** *Exercise13\_2\_Analysis.cpp*
This program generates random arrays and compares the performance of different sorting algorithms using two metrics:

* **Number of comparisons**
* **Number of exchanges/swaps**

Sorting algorithms compared:

* Bubble Sort
* Selection Sort
* Insertion Sort
* Heap Sort

Data sizes tested: 10, 100, 1000, 5000, 10000, 20000, 50000

### ✅ Exercise 13.3 - (Work In Progress)

This file seems to contain an incomplete or continued implementation of Exercise 13.3. It appears to be a variation or enhancement of the bubble sort implementation.

---

## 💡 How to Run

1. Compile each `.cpp` file using a C++ compiler, e.g.:

   ```bash
   g++ Exercise13_1_Bubble.cpp -o bubble
   ./bubble
   ```

2. For performance analysis:

   ```bash
   g++ Exercise13_2_Analysis.cpp -o analysis
   ./analysis
   ```

3. Make sure to have a C++11-compatible compiler or higher.

---

## 📌 Notes

* Uses standard libraries only (`<iostream>`, `<ctime>`, `<cstdlib>`).
* Outputs can be copied to a spreadsheet or plotted for visual analysis of sorting performance.
* This project is useful for understanding the **time complexity trade-offs** between sorting algorithms.

---

