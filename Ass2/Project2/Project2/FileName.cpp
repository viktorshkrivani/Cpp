/*==========================================================

 Title:       Assignment 2 - Numerical Representation
 Course:      CIS 2252
 Author:      <Viktor Shkrivani>
 Date:        <05/28/2023 >
 Description: 

 ==========================================================
*/

#include <iostream>
#include <unordered_map>


std::string numberToWords(int number) {

    std::unordered_map<int, std::string> words = {
    {1, "one"},
    {2, "two"},
    {3, "three"},
    {4, "four"},
    {5, "five"},
    {6, "six"},
    {7, "seven"},
    {8, "eight"},
    {9, "nine"}
  };

    if (words.count(number) > 0){
    return words[number];
    }

  return "";
 
}
 
 
int main() {
    
    int num1;
    std::cin >> num1;
    
    int num2;
    std::cin >> num2;
    
    for (int i = num1; i <= num2; ++i) {
        if (i >= 1 && i <=9) {
            std::string word = numberToWords(i);
            std::cout << word << std::endl;
        }
        else if (i % 2 == 0) {
            std::cout << "even" << std::endl;
        } else {
            std::cout << "odd" << std::endl;
        }
    }

  
                   
  return 0;
}


