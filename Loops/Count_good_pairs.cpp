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

    // Count good pairs
    int count = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
    }

    // Output result
    cout << "Number of good pairs: " << count << endl;

    // Free memory
    delete[] arr;

    return 0;
}