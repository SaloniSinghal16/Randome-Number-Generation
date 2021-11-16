//
//  Recursive exponentiation.cpp
//  HW_3
//
//  Created by Saloni Singhal on 11/13/21.
//


#include <iostream>
using namespace std;

int power (int base, int exponent)
{
    if (exponent==1)
        return base;
        else
        return base*power(base, exponent-1);
}

int main(){
    int base;
    int exponent;
    cout<<"Enter base: ";
    cin>>base;
    cout<< endl;
    cout<<"Enter exponent: ";
    cin>>exponent;
    cout<< endl;
    cout<<"power("<<base<<","<<exponent<<")= "<<power(base, exponent)<<endl;
}
