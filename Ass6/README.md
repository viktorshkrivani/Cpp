# 🏀 Assignment 6 — Basketball Season Scores with Dynamic Arrays

## Objective
Write a C++ program that manages the scores for a basketball team across 5 games in a season using dynamic arrays and functions.

- Initialize the scores for 5 games (game 1 to game 5) using a formula:
  - Game 1 = 21 points, Game 2 = 32 points, ..., Game 5 = 65 points.
- Allow the user to update the score for a specific game by adding additional points.
- Display the updated score of the selected game.
- Print all game scores after the update.
- Calculate and display the total score for the season.


## Functions Explained
- **`void alterGameScore(int pArr[], int gameNumber)`**  
  Adds `k` points (user input inside the function) to the specified game.  

- **`void printScores(int pArr[], int gameMAX)`**  
  Prints all updated scores for every game.  

- **`int totalScore(int pArr[], int gameMAX)`**  
  Returns the sum of all scores in the array.  


## Sample Input/Output

**Input:**

4

21

**Output:**

75

21

32

43

75

65


236
