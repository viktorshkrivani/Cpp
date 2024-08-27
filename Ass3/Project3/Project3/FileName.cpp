#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int size;
    std::cin >> size;

    std::vector<int> arr(size); // Use a vector instead of a dynamic array

    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    std::reverse(arr.begin(), arr.end()); // Reverse the elements using std::reverse

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}




