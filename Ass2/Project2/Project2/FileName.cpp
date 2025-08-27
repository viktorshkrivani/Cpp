
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Before sorting: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    sort(arr, arr + size);

    cout << "\nAfter sorting: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nPrinting in reverse order: ";
    for (int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}
