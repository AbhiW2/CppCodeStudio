#include<iostream>

using namespace std;

class AddTwoNumbers{
    private:
        int num1;
        int num2;
    public:
       AddTwoNumbers(int n1,int n2){
        num1=n1;
        num2=n2;
       }
       void displaySum(){
        cout<<"Sum of Two Numbers:"<<num1+num2<<endl;
       }
};

int main(){
    AddTwoNumbers obj(10,20);
    obj.displaySum();
    return 0;
}