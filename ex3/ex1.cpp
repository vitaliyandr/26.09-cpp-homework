#include <iostream>
using namespace std;

int main() {
    int year, days;

    cout << "Enter the year number: ";
    cin >> year;

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        days = 366;
    }
    else {
        days = 365;
    }

    cout << "Number of days in a year - " << year << ": " << days << endl;

    return 0;
}