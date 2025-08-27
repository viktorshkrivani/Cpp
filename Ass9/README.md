# 🐉 Assignment 9  — Creature Inheritance and Polymorphism

## Objective
Write a C++ program that demonstrates inheritance and polymorphism with three classes:  
- **Creature** (base class with name, quantity, and type).  
- **Phoenix** (derived class, adds color, overrides print).  
- **Basilisk** (derived class, quantity always 1, overrides print).  


## Requirements (Summary)
- Create constructors for initializing creature data.  
- Override the `printStatement()` function in child classes.  
- In `main()`, store 3 creature names in an array (last one defaults to `"Clover"`).  
- Instantiate objects of `Creature`, `Phoenix`, and `Basilisk` and call their `printStatement()` functions.  

## Sample Input/Output

**Input:**

Mario

Luigi

**Output:**

There's 2 creatures named Mario

There's 3 golden Phoenix creatures named Luigi

There's 1 Basilisk creature named Clover
