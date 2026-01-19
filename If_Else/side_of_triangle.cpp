#include<iostream>
using namespace std;
int main(){
    int a,b,c;
        cout<<"Enter 1st side of triangle:";
        cin>>a;
        cout<<"Enter 2st side of triangle:";
        cin>>b;
        cout<<"Enter 3st side of triangle:";
        cin>>c;
    if((a+b)>c && (b+c)>a && (c+a)>b){
        cout<<"Valid Triangle";
    }else{
        cout<<"Invalid Triangle";
    }
}