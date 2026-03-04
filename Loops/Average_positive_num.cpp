#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0, count = 0;

    cout << "Enter numbers (enter 0 to stop): " << endl;

    while (true) {
        cin >> number;

        if (number == 0)  // Stop condition
            break;

        if (number > 0) { // Only positive numbers
            sum += number;
            count++;
        }
    }

    if (count > 0)
        cout << "Average of positive numbers = " << (float)sum / count << endl;
    else
        cout << "No positive numbers entered." << endl;

    return 0;
}