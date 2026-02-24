#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a n Number: ";
    cin >> n;

    double sum = 0.0;

    for (int i = 1; i <= n; i++) {
        sum = sum + (1.0 / i);
    }

    cout << sum << endl;

    return 0;
}