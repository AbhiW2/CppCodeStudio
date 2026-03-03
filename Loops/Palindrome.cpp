#include <iostream>
using namespace std;

int main() {
    int num, original, reversed = 0, remainder;

    cout << "Enter an integer: ";
    cin >> num;

    original = num;   // Store original number

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    if (original == reversed) {
        cout << "The number is a palindrome." << endl;
    } else {
        cout << "The number is not a palindrome." << endl;
    }

    return 0;
}