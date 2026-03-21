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

    // Assume first element as min and max
    int minVal = arr[0];
    int maxVal = arr[0];

    // Find min and max
    for(int i = 1; i < n; i++) {
        if(arr[i] < minVal) {
            minVal = arr[i];
        }
        if(arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    // Output results
    cout << "Minimum element: " << minVal << endl;
    cout << "Maximum element: " << maxVal << endl;

    // Free memory
    delete[] arr;

    return 0;
}