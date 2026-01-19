#include<iostream>
using namespace std;
int main(){
    int a,b;
    float result;
          cout<<"Enter two number:";
          cin>>a>>b;
result=a+b;
          cout<<"Addition of two number:"<<result<<endl;
 result=a-b;
          cout<<"Substraction of two number:"<<result<<endl;
result=a*b;
         cout<<"Multiplication of two number:"<<result<<endl;
    if(b!=0){
        result=a/b;
    cout<<"Division of two number:"<<result<<endl;
    }else{
        cout<<"Division not possible"<<endl;
    }

}