# 🚀 Assignment 5 — Modify Function (Sum and Absolute Difference)

## Objective
Write a C++ program that modifies two integers in memory using pointers and a `Modify()` function.  
The program should update the two numbers such that:
- The first number stores the **sum** of the two input numbers.
- The second number stores the **absolute difference** of the two input numbers.

## Rules
- The function `Modify()` must be of type `void` (no return value).
- You must not change the parameters of `Modify()`.
- Use pointers/references to update the values directly in memory.
- The absolute difference must always be positive.
  
## Hints
- Use the `abs()` function from `<cstdlib>` to calculate the absolute difference.  
- Example:  
  - Input: `6` and `10`  
  - Difference: `|6 - 10| = 4`  

## Sample Input/Output

### Sample 1
**Input:**

1006

771

**Output:**

1777

235

### Sample 2
**Input:**

3

17

**Output:**
20

14
