#include <iostream>
using namespace std;

int main() {
	int hryvnia, kopecks;

	cout << "Enter the amount in UAH and kopecks: ";
	cin >> hryvnia >> kopecks;

	// коригування суми, якщо копійок більше 99
	hryvnia += kopecks / 100;
	kopecks %= 100;

	cout << "Adjusted amount: " << hryvnia << " UAH " << kopecks << " cop" << endl;

	return 0;
}