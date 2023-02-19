#include <iostream>
using namespace std;

int main() {
	float length, width, height, volume;

	cout << "Enter the length: ";
	cin >> length;
	cout << "Enter the width: ";
	cin >> width;
	cout << "Enter the height: ";
	cin >> height;

	// обчислення об'єму паралелепіпеда
	volume = length * width * height;

	cout << "The volume of a parallelepiped: " << volume << endl;

	return 0;
}