#include<iostream>
using namespace std;

int main() {
    int month;
    cout << "Enter month (1-12): ";
    cin >> month;

    if (month == 1) {
        cout << "January has 31 days.";
    } else if (month == 2) {
        cout << "February has 28 days.";
    } else if (month == 3) {
        cout << "March has 31 days.";
    } else if (month == 4) {
        cout << "April has 30 days.";
    } else if (month == 5) {
        cout << "May has 31 days.";
    } else if (month == 6) {
        cout << "June has 30 days.";
    } else if (month == 7) {
        cout << "July has 31 days.";
    } else if (month == 8) {
        cout << "August has 31 days.";
    } else if (month == 9) {
        cout << "September has 30 days.";
    } else if (month == 10) {
        cout << "October has 31 days.";
    } else if (month == 11) {
        cout << "November has 30 days.";
    } else if (month == 12) {
        cout << "December has 31 days.";
    } else {
        cout << "Invalid month.";
    }

    return 0;
}