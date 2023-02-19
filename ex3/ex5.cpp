#include <iostream>
using namespace std;

int main() {
	float radius, volume;

	cout << "Enter the radius of the sphere: ";
	cin >> radius;

	// обчислення об'єму кулі
	volume = (4.0 / 3.0) * 3.14159 * radius * radius * radius;

	cout << "Bullet volume: " << volume << endl;

	return 0;
}