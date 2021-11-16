#include <iostream>
using namespace std;

// recursive search of greatest common divisor
int gcd(int x, int y)
{
    cout << "Step of recursion: x = " << x << ", y = " << y << endl;
    if (y == 0)
    {
        cout << "GCD is: " << x << endl;;
        return x;
    }
    else
    {
        return gcd(y, x % y);
    }
}

int main()
{
    int x, y;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    gcd(x, y);
}
