//
//  Function Template Minimum.cpp
//  HW_3
//
//  Created by Saloni Singhal on 11/13/21.
//

#include <iostream>
using namespace std;
template <class T>
T Min (T num1, T num2)
{
    if (num1> num2)
        return num2;
    else
        return num1;
}
int main ()
{
    int inum1, inum2;
    float fnum1, fnum2;
    char ch1, ch2;
    cout<<"Enter two integer values: ";
    cin>>inum1>>inum2;
    cout<<"Lesser of the two is: "<<Min(inum1, inum2)<<endl;
    cout<<"Enter two float values: ";
    cin>>fnum1>>fnum2;
    cout<<"Lesser of the two is: "<<Min(fnum1, fnum2)<<endl;
    cout<<"Enter two character values: ";
    cin>>ch1>>ch2;
    cout<<"Lesser of the two is: "<<Min(ch1, ch2)<<endl;
    return 0;
    
}
