#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Marks of Student:";
    cin>>n;
if(n>=80 && n<=100){
    cout<<"Very Good";
}else if(n>=61 && n<=79){
    cout<<"Good";
}else if(n>40 && n<=60){
    cout<<"Average";
}else{
    cout<<"Fail";
}
}