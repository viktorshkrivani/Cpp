# Assignment 4 — BMI Calculator with Function Overloading

## Objective
Write a C++ program that calculates the Body Mass Index (BMI) for two individuals (the “magic twins”) using function overloading and a swap operation.

- **Input:**
  - Two weights in kilograms.
  - One height in feet (to be converted into meters).

- **Tasks:**
  - Create a function to convert height from feet to meters.  
    `height_in_meters = height_in_feet / 3.281`
  - Define two BMI Calculator functions:
    - One that takes a single weight input (default height = 1.8 m).
    - One that takes both weight (kg) and height (m).
  - (Optional) Create a swap function to exchange the values of both weights.
  - Calculate BMI for both twins before swapping weights, then again after swapping.

**Formula:** BMI = weight (kg) / (height (m) ^ 2)

## Sample Input/Output

**Input:**

56 77 6.1

**Output:**

17.284    22.2763

23.7654   16.201
