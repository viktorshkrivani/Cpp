# Assignment 8 🏟️ — Arena and ArenaArea Classes (Inheritance & Overriding)

## Objective
Write a C++ program that uses **inheritance** and **function overriding** to compute the radius squared and area of a wizard tournament arena.

- Create two classes:
  - **Arena** — stores the radius of the arena.
  - **ArenaArea** — derived from `Arena`, computes the arena area.

## Requirements
- **Arena class**:
  - Contains an integer field `radius`.
  - Implements `display()` method to print the radius squared of the arena.

- **ArenaArea class** (inherits from `Arena`):
  - Implements `scan_input()` method to read the arena radius from user input.
  - Overrides `display()` method to:
    - Print the radius squared.
    - Print the computed area using the formula:  
      `area = 3.14 × radius²`

- **Do not** modify anything inside the `main()` function.


## Input Format
- A single integer representing the radius of the arena.


## Output Format
1. On the first line, print the radius squared.  
2. On the second line, print the area of the arena.  


## Formula

radiusSquared = radius × radius

area = 3.14 × pow(radius, 2)

## Sample Input/Output

### Sample 1
**Input:**

90

**Output:**
8100

25434
