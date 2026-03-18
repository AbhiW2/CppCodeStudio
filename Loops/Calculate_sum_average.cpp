#include <iostream>
using namespace std;

int main() {
    int n;

    // Input size of array
    cout << "Enter number of elements: ";
    cin >> n;

    // Dynamically allocate memory
    int* arr = new int[n];

    // Input elements
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Calculate sum
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Calculate average
    double average = (double)sum / n;

    // Output results
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    // Free allocated memory
    delete[] arr;

    return 0;
}