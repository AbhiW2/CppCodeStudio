#include<iostream>

using namespace std;

class Abhi{
    public:
        string name;
        int age;
    private:
        string status;
        int salary;
    public:
    Abhi(string n, int a, string s, int sal){
        name = n;
        age = a;
        status = s;
        salary = sal;
    }
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Status: " << status << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main(){
    Abhi obj("Abhi", 25, "Single", 50000);
    obj.displayInfo();
    return 0;
}
