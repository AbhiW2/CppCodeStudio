#include <iostream>
using namespace std;

int main() {
    int n;

    // Input size of array
    cout << "Enter number of elements: ";
    cin >> n;

    // Dynamically allocate array
    int* arr = new int[n];

    // Input elements
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Print array in reverse order
    cout << "Array in reverse order:\n";
    for(int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    // Free dynamically allocated memory
    delete[] arr;

    return 0;
}