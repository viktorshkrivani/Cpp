#include <iostream>
#include <cmath>
using namespace std;

class Arena {
protected:
    int radius;

public:
    void display() {
        int radiusSquared = radius * radius;
    }
};

class ArenaArea : public Arena {
public:
    void scan_input() {
        cin >> radius;
    }

    void display() {
        int radiusSquared = radius * radius;
        double area = 3.14 * pow(radius, 2);
        cout << radiusSquared << endl;
        cout << area << endl;
    }
};



int main() {

	ArenaArea stadium;

	stadium.scan_input();

	stadium.Arena::display();
	cout << endl;
	stadium.display();

	return 0;
}