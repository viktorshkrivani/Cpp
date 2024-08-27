#include <iostream>
using namespace std;

class Wizard {
private:
    int wizardAge;
    string wizardFirstName;
    string wizardLastName;
    int wizard_ID;

public:
    void set_wizardAge(int age) {
        wizardAge = age;
    }

    int get_wizardAge() {
        return wizardAge;
    }

    void set_wizardFirstName(string firstName) {
        wizardFirstName = firstName;
    }

    string get_wizardFirstName() {
        return wizardFirstName;
    }

    void set_wizardLastName(string lastName) {
        wizardLastName = lastName;
    }

    string get_wizardLastName() {
        return wizardLastName;
    }

    void set_wizard_ID(int id) {
        wizard_ID = id;
    }

    int get_wizard_ID() {
        return wizard_ID;
    }
};

int main() {
	int wizardAge, wizard_ID;
	string wizardFirstName, wizardLastName;

	cin >> wizardAge >> wizardFirstName >> wizardLastName >> wizard_ID;

	Wizard wiz;

	wiz.set_wizardAge(wizardAge);
	wiz.set_wizard_ID(wizard_ID);
	wiz.set_wizardFirstName(wizardFirstName);
	wiz.set_wizardLastName(wizardLastName);

	cout << wiz.get_wizardAge() << "\n";
	cout << wiz.get_wizardLastName() << ", " << wiz.get_wizardFirstName() << "\n";
	cout << wiz.get_wizard_ID();

	return 0;
}
