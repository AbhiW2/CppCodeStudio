#include<iostream>
#include "PrimeFactorization.hpp"

using namespace std;

int main(){
    int number;

    cout<<"Enter a Number:";
    cin>>number;

    PrimeFactorization pf;
    pf.findPrimeFactors(number);

    return 0;
}