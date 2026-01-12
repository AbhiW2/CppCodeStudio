#include<iostream>
using namespace std;
int main(){
    int n;
        cout<<"Enter a number:";
        cin>>n;
    if(n>99 && n<1000){
        cout<<"Number is three digit:"<<n;
    }else{
        cout<<"Number Not three digit:"<<n;
    }
}