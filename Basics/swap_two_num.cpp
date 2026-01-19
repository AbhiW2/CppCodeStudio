#include<iostream>
using namespace std;
int main(){
    int a,b;
    int temp;
        cout<<"Enter two numbers:";
        cin>>a>>b;
    temp=a;
    a=b;
    b=temp;
        cout << "After swapping:" << endl;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;

    return 0;

}