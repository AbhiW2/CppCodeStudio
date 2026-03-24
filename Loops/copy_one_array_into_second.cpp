#include<iostream>

using namespace std;

int main(){

    int n;

    cout<<"Enter Size of Array:";
    cin>>n;

    int* arr1 = new int[n];
    int* arr2 = new int[n];

    cout<<"Enter "<<n << " Elements in 1st Array:";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

    for(int i=0;i<n;i++){
        arr2[i]=arr1[i];
    }

    cout<<"Elements in 2nd Array are:";
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }

    delete[] arr1;
    delete[] arr2;

}