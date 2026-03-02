#include<iostream>
#include "PrimeFactorization.hpp"

using namespace std;

void PrimeFactorization::findPrimeFactors(int number){
    cout<< "Prime factors of " << number << " are " ;

    while(number %2==0){
        cout << 2 << " ";
        number = number /2;
    }
    for(int i =3;i*i<=number;i+=2){
        while(number % i ==0){
            cout << i << " ";
            number = number /i;
        }
    }

    if(number > 2){
        cout << number;
    }
    cout << endl;
}