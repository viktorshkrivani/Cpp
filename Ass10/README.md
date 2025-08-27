# 💱 Assignment 10 — Currency Exchange with Inheritance & File Handling
[Code location](./Project10/Project10/FileName.cpp)

## Objective
Write a C++ program using inheritance to convert foreign currency (Yuan, Euro, Pounds) into USD with a 5% fee, then print and save the transaction details into a receipt file.

## Requirements (Summary)
- **Classes**:  
  - `ctm` → parent, handles currency type & factor selection (1–3).  
  - `amount` → child, calculates conversion amount, fee, and total.  
  - `rc` → grandchild, outputs results to both console and `receipt.txt`.  

- **Validation**: Ensure input is a valid number (1–3). Print error message if invalid.  
- **Output**:  
  1. Original amount with currency name.  
  2. Conversion in dollars.  
  3. Conversion fee.  
  4. Total amount due.  

## Sample Input/Output

**Input:**

2

550

**Output:**

550.00 Euro

561.22 dollars

28.06 dollars

589.29 dollars
