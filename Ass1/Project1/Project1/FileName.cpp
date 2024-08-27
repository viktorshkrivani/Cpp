#include <iostream>
#include <unordered_map>

std::string numberToWord(int number) {
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

    if (words.count(number) > 0) {
        return words[number];
    }

    return "";  // Return empty string if number is not in range
}

int main() {
    int num1, num2;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << "Output: " << std::endl;

    for (int i = num1; i <= num2; ++i) {
        if (i >= 1 && i <= 9) {
            std::string word = numberToWord(i);
            std::cout << word << std::endl;
        }
        else if (i % 2 == 0) {
            std::cout << "even" << std::endl;
        }
        else {
            std::cout << "odd" << std::endl;
        }
    }

    return 0;
}
