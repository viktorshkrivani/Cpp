#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    double age;
    cin >> name >> age;

    double wizardAge;

    if (age <= 1.0) {
        wizardAge = age * 10.5;
    } else if (age <= 2.0) {
        wizardAge = 21.0;
    } else {
        wizardAge = 21.0 + (age - 2.0) * 4.0;
    }

    cout << "The dragon named " << name 
         << " is " << wizardAge 
         << " years old in wizard years." << endl;

    return 0;
}
