#include <iostream>
#include <cstdlib>

using namespace std;


void Modify(int* x, int* y) {

	int sum = *x + *y;
	int diff = abs(*x - *y);
	*x = sum;
	*y = diff;


}

int main() {

	int x, y;

	int* ptr_x = &x;
	int* ptr_y = &y;

	cin >> x;
	cin >> y;

	Modify(ptr_x, ptr_y);

	cout << x << endl;
	cout << y;

	return 0;
}