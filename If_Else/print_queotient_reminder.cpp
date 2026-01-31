#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter first integer: ";
    cin >> num1;

    cout << "Enter second integer: ";
    cin >> num2;

    if (num2 != 0) {
        int quotient = num1 / num2;
        int remainder = num1 % num2;

        cout << "Quotient = " << quotient << endl;
        cout << "Remainder = " << remainder << endl;
    } else {
        cout << "Error: Division by zero is not allowed." << endl;
    }

    return 0;
}
