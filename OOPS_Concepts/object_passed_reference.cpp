#include<iostream>

using namespace std;

class X{

    public:
        int x;

};
  void update(X &obj){
    obj.x=50;
  }

  int main(){
    X obj;
    obj.x = 10;
    update(obj);
    cout << "Updated value of x: " << obj.x << endl;
    return 0;
  }