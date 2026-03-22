#include <iostream>
using namespace std;

int main() {
    int n;

    // Input size
    cout << "Enter number of elements: ";
    cin >> n;

    // Dynamic allocation
    int* arr = new int[n];

    // Input elements
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Count even and odd numbers
    int evenCount = 0, oddCount = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    // Output results
    cout << "Even numbers count: " << evenCount << endl;
    cout << "Odd numbers count: " << oddCount << endl;

    // Free memory
    delete[] arr;

    return 0;
}