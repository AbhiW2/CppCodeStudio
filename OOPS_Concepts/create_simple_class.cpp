#include<iostream>

using namespace std;

class Student{
    public:
        string name;
        string email;
        int rollNumber;
        int age;

        void displayInfo(){
            cout<<"Name:"<<name  <<endl;
            cout<<"Email:"<<email  <<endl;
            cout<<"Roll Number:" <<rollNumber <<endl;
            cout<<"Age:"<<age  <<endl;
        }
};

int main(){

    Student s1;
    s1.name = "Abhi";
    s1.email = "abhi@example.com";
    s1.rollNumber = 101;
    s1.age = 21;
    s1.displayInfo();
}