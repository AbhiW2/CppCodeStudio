#include<iostream>
using namespace std;

int main(){

    int n,key;

    cout<<"Enter the size of array: ";
    cin>>n;

    int* arr = new int[n];

    cout<<"Enter "<< n << " elements in array:";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter the key element to search:";
    cin>>key;

    int foundIndex = -1;
    for(int i =0;i<n;i++){
        if(arr[i]==key){
            foundIndex = i;
            break;
        }
    }

    if(foundIndex != -1){
        cout<<"Element found at index: "<< foundIndex;
    }else{
        cout<<"Element not found";
    }

    delete[] arr;
    return 0;
}