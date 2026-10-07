#include <iostream>
using namespace std;

int main() {
    int month, day, year;

    cout << "Enter the month: ";
    cin >> month;

    cout << "Enter the day: ";
    cin >> day;

    cout << "Enter the two-digit year: ";
    cin >> year;

    if (month >= 1 && month <= 12 && day >= 1 && day <= 31) {
        if (month * day == year) {
            cout << "The date is magic!" << endl;
        } else {
            cout << "The date is not magic." << endl;
        }
    } else {
        cout << "Invalid date." << endl;
    }

    return 0;
}