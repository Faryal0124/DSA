
# 🔍 Search Comparison: Sequential vs Binary Search (C++)

## 📋 Overview

This C++ program compares the performance of **Sequential Search** and **Binary Search** on randomly generated arrays of various sizes. It measures the **number of comparisons** required to find a key that **exists** (successful search) and one that **does not exist** (unsuccessful search) in the array.

## 📌 Features

* Generates arrays of increasing sizes.
* Performs:

  * Sequential Search (Successful & Unsuccessful)
  * Binary Search (Successful & Unsuccessful)
* Outputs the number of comparisons made in each case.
* Uses `rand()` for randomness and `sort()` from `<algorithm>` for binary search preparation.

## 📈 Output Format

```
N       Seq(S)  Seq(U)  Bin(S)  Bin(U)
<size>  <comp>  <comp>  <comp>  <comp>
```

Where:

* `Seq(S)` = Sequential Search comparisons (successful)
* `Seq(U)` = Sequential Search comparisons (unsuccessful)
* `Bin(S)` = Binary Search comparisons (successful)
* `Bin(U)` = Binary Search comparisons (unsuccessful)

## 🧠 Algorithms Used

### Sequential Search:

Checks each element from start to end until the key is found or the array ends.

### Binary Search:

Works on **sorted arrays**. Repeatedly divides the array in half to find the key.

## ⚙️ Array Sizes Tested

The array sizes tested are:

```
10, 100, 1000, 5000, 10000, 20000, 50000
```

## 🛠️ How It Works

1. For each array size:

   * A random array is generated.
   * A random element from the array is selected as the **key for successful search**.
   * A key (`N * 3`) that likely doesn’t exist is used for **unsuccessful search**.
2. **Sequential Search** is run for both keys.
3. The array is **sorted**.
4. **Binary Search** is run for both keys.
5. Comparisons are counted and printed.

## 🧪 Example Output

```
N       Seq(S)  Seq(U)  Bin(S)  Bin(U)
10      3       10      3       4
100     54      100     6       7
1000    803     1000    6       11
...
```

## 🧹 Memory Management

* Dynamic arrays (`new int[N]`) are created for each size and deleted after use to avoid memory leaks.

## 📂 Files Used

* **main.cpp** (contains the full code)
* No additional files required.

## 🚀 How to Run

1. Save the code as `main.cpp`.
2. Compile:

   ```bash
   g++ main.cpp -o search_compare
   ```
3. Run:

   ```bash
   ./search_compare
   ```

## 📚 Headers Used

```cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
```

