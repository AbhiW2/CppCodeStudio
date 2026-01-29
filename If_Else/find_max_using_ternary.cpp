#include<iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;
    int max = (a > b) ? a : b;
    cout << "Max Number: "  << max << endl;

    return 0;
}
