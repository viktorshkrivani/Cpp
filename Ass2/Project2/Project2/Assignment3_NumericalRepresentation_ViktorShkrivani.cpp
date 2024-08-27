/*==========================================================

 Title:       Assignment 3 - Numerical Reversal
 Course:      CIS 2252
 Author:      <Viktor Shkrivani>
 Date:        <06/04/2023>
 Description: This program ....

 ==========================================================
*/
#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    
    int size;
    // number given 
    std::cin >> size;
    
    std::vector<int> arr(size);
    
    // give numbers
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
    
    std::reverse(arr.begin(), arr.end());
    
    // backwards
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    
    return 0;

}

