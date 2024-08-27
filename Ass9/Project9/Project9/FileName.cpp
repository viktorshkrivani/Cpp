#include <iostream>
#include <string>
using namespace std;

class Creature {
protected:
	string name;
	int quantity;
	string creatureType;
	
public:
	Creature() : name(""), quantity(0), creatureType("unknown") {}

	Creature(string name, int quantity) : name(name), quantity(quantity), creatureType("unknown") {}

	void setName(string name) {
		Creature::name = name;
	}

	void setQuantity(int quantity) {
		Creature::quantity = quantity;
	}

	string getName() const {
		return name;
	}

	int getQuantity() const {
		return quantity;
	}

	void printStatement() const {
		cout << "There's " << quantity << " creatures named " << name << endl;

	}
};

class Phoenix : public Creature {
protected:
	string color;

public:
	Phoenix() : Creature() {
		creatureType = "Pheonix";
	}

	void setColor(string color) {
		Phoenix::color = color;
	}

	string getColor() const {
		return color;
	}

	void printStatement() const {
		cout << "There's " << quantity << " " << color << " Phoenix creatures named " << name << endl;

	}
};


class Basilisk : public Creature {
public:
	Basilisk() : Creature() {
		creatureType = "Basilisk";
		quantity = 1;
	}
	
	void printStatement() const {
		cout << "There's " << quantity << " Basilisk creature named  " << name << endl;
	}
};

int main() {

	//create emty array of size 3 for string name
	string nameArr[3];

	// Write loop here to record user input as names
	// and set third name to "Clover"
	for (int i = 0; i < 3; ++i) {
		if (i < 2) {
			cin >> nameArr[i];
		}
		else {
	 nameArr[i] = "Clover";
		}
	}


	Creature c(nameArr[0], 2);
	//print statement from class
	c.printStatement();

	Phoenix p;
	//sets name, quality and color
	p.setName(nameArr[1]);
	p.setQuantity(3);
	p.setColor("golden");
	//print statement from class
	p.printStatement();

	Basilisk b;
	//sets name
	b.setName(nameArr[2]);
	//prints statement from calss
	b.printStatement();


}
