#include <iostream>


using namespace std;

void alterGameScore(int pArr[], int gameNumber) {
	int additionalPoints;
	cin >> additionalPoints;
	pArr[gameNumber] += additionalPoints;
}

void printScores(int pArr[], int gameMAX) {
	for (int i = 0; i < gameMAX; i++) {
		cout << pArr[i] << endl;
	}
	cout << endl;
}

int totalScore(int pArr[], int gameMAX) {
	int sum = 0;
	for (int i = 0; i < gameMAX; i++) {
		sum += pArr[i];
	}
	return sum;
}

int main() {
	const int gameMAX = 5;
	int* pArr;
	pArr = new int[gameMAX];

	for (int i = 0; i < gameMAX; i++) {
		*(pArr + i) = ((i + 2) * 10) + (i + 1);
	}

	int gameNumber;
	cin >> gameNumber;

	alterGameScore(pArr, gameNumber - 1);

	cout << *(pArr + gameNumber - 1) << endl;

	printScores(pArr, gameMAX);

	cout << endl << totalScore(pArr, gameMAX);

}