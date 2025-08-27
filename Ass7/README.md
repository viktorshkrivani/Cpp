# 🧙 Assignment 7 — Wizard Class with Encapsulation
[Code location](./Project7/Project7/FileName.cpp)

## Objective
Write a C++ program that defines a class `Wizard` to represent wizards at Ravenwood School of Magical Arts.  
The class should store and manage the following details of each wizard:
- Age  
- First Name  
- Last Name  
- Ravenwood School ID Number  

You will implement **set** and **get** functions for each property, ensuring proper encapsulation.


## Requirements
- Create a class `Wizard` with private data members:  
  - `int wizardAge`  
  - `string wizardFirstName`  
  - `string wizardLastName`  
  - `int wizard_ID`  

- Provide **set** and **get** functions for each field:  
  - `set_wizardAge(int age), get_wizardAge()`  
  - `set_wizardFirstName(string firstName), get_wizardFirstName()`  
  - `set_wizardLastName(string lastName), get_wizardLastName()`  
  - `set_wizard_ID(int id), get_wizard_ID()`  

- Do **not** change anything inside the `main()` function; it is already provided.  


## Input Format
There will be 4 inputs:
1. An integer — age of the wizard.  
2. A string — first name of the wizard.  
3. A string — last name of the wizard.  
4. An integer — Ravenwood ID of the wizard.  


## Output Format
The program should output:
1. Age of the wizard.  
2. Last name, followed by a comma, then the first name.  
3. The Ravenwood School ID.  


## Sample Input/Output

**Input:**

20

Isaac

Legend

1013

**Output:**

20

Legend, Isaac

1013
