#include<iostream>
using namespace std;

int main(){
    int day;

    cout<<"Enter day number (1-7): ";
    cin>>day;

    if(day==1){
        cout<<" Day 1: Monday";
    }
    else if(day==2){
        cout<<" Day 2: Tuesday";
    }
    else if(day==3){
        cout<<" Day 3: Wednesday";
    }
    else if(day==4){
        cout<<" Day 4: Thursday";
    }
    else if(day==5){
        cout<<" Day 5: Friday";
    }
    else if(day==6){
        cout<<" Day 6: Saturday";
    }
    else if(day==7){
        cout<<" Day 7: Sunday";
    }
    else{
        cout<<"Invalid day";
    }

    return 0;
}