#include<iostream>

using namespace std;

class A{
    public:
        int x;
          void set(int val){
             x = val;
         }

         void add(A obj){
             x = x + obj.x;
         }
};

int main(){
    A obj1, obj2;
    obj1.set(5);
    obj2.set(10);
    obj1.add(obj2);
    cout<<"Value of obj1.x: "<<obj1.x<<endl;
    return 0;
}