#include <iostream>
using namespace std;

double conversionMeters(double height_in_feet) {
	double height_in_meters = height_in_feet / 3.281;
	return height_in_meters;
}

float BMIcalculator(double weight, double height) {
	float height_squared = height * height;
	float bmi = weight / height_squared;
	return bmi;
}

float BMIcalculator(double weight) {
	return BMIcalculator(weight, 1.8);
}

void swap(double& a, double& b) {
	double temp = a;
	a = b;
	b = temp;
}



int main() {
	double w1, w2, h;
	cin >> w1 >> w2 >> h;

	float index1 = BMIcalculator(w1);
	float index2 = BMIcalculator(w2, conversionMeters(h));

	cout << index1 << " " << index2 << endl;

	swap(w1, w2);

	index1 = BMIcalculator(w1);
	index2 = BMIcalculator(w2, conversionMeters(h));

	cout << index1 << " " << index2 << endl;

	return 0;
}