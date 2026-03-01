#include <iostream>
using namespace std;

int main() {
    int n;
    long long fact = 1;
    int i = 1;

    cout << "Enter a number: ";
    cin >> n;

    while (i <= n) {
        fact = fact * i;
        i++;
    }

    cout << "Factorial of " << n << " is: " << fact << endl;

    return 0;
}