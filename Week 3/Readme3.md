# Recursive Functions in C++

## Overview
This repository contains multiple examples of recursive functions in C++. The programs demonstrate recursion for factorial calculation, string reversal, power calculations, the Ackermann function, and more.

## Table of Contents
- [Example 3.1: Factorial Calculation](#example-31-factorial-calculation)
- [Example 3.2: String Reversal](#example-32-string-reversal)
- [Example 3.3: Power Calculation](#example-33-power-calculation)
- [Exercise 3.1: Power Table](#exercise-31-power-table)
- [Example 3.4: Ackermann Function](#example-34-ackermann-function)
- [Exercise 3.2: Ackermann Function](#exercise-32-ackermann-function)
- [Exercise 3.3 Part A: Print Function](#exercise-33-part-a-print-function)
- [Exercise 3.3 Part B: Binomial Coefficient](#exercise-33-part-b-binomial-coefficient)
- [Exercise 3.3 Part C: Prime Number Check](#exercise-33-part-c-prime-number-check)

---

## Example 3.1: Factorial Calculation
**File:** `factorial.cpp`
This program calculates the factorial of a given number using recursion.
```cpp
int fact(int n) {
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}
```

## Example 3.2: String Reversal
**File:** `reverse_string.cpp`
A recursive function to reverse an input string.
```cpp
void rev() {
    char ch;
    cin.get(ch);
    if (ch != '\n') {
        rev();
        cout.put(ch);
    }
}
```

## Example 3.3: Power Calculation
**File:** `power_calculation.cpp`
Computes the power of a number using recursion.
```cpp
int Power(int x, int N) {
    if (N == 0)
        return 1;
    else
        return Power(x, N - 1) * x;
}
```

## Exercise 3.1: Power Table
**File:** `power_table.cpp`
Generates a table of powers of 2 up to a specified exponent.

## Example 3.4: Ackermann Function
**File:** `ackermann.cpp`
Implements the Ackermann function, a well-known recursive function in computer science.
```cpp
int Ackermann(int m, int n) {
    if (m == 0)
        return n + 1;
    else if (m > 0 && n == 0)
        return Ackermann(m - 1, 1);
    else
        return Ackermann(m - 1, Ackermann(m, n - 1));
}
```

## Exercise 3.2: Ackermann Function
**File:** `ackermann_exercise.cpp`
Same as Example 3.4 but tested with input values Ackermann(3,4).

## Exercise 3.3 Part A: Print Function
**File:** `print_function.cpp`
Attempts to print numbers in descending order using recursion.

## Exercise 3.3 Part B: Binomial Coefficient
**File:** `binomial_coefficient.cpp`
Computes the binomial coefficient using recursion.

## Exercise 3.3 Part C: Prime Number Check
**File:** `prime_check.cpp`
Recursively checks whether a number is prime or not.
```cpp
int prime(int n, int div) {
    if (n < 2)
        return false;
    else if (div == n - 1)
        return true;
    if (n % div == 0)
        return false;
    else
        return prime(n, div + 1);
}
```

## Compilation and Execution
To compile and run any of these programs, use a C++ compiler such as g++:
```sh
g++ filename.cpp -o output
./output
```



