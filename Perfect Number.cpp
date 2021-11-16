//
//  Perfect Number.cpp
//  HW_3
//
//  Created by Saloni Singhal on 11/9/21.
//

#include <iostream>
#include<iomanip>
using namespace std;

bool isPerfect (int num)
{
    int sumofDivisor{1};
    for (int i=2; i<=num/2; i++)
    {
        if ((num%i)==0)
            sumofDivisor +=i;
    }
    return (sumofDivisor==num);
}

int main(){
    cout<<"Perfect number between 1 and 500000: "<<endl;
    for (int num=1; num<=500000; num++)
    {
        if (isPerfect(num))
        {
            cout<<num<<"="<<"1";
            for (int i=2; i<=num/2; i++) {
                if ((num%i)==0)
                    
                    cout<<"+"<<i;
            }
            cout<<endl;
        }
    }
}
