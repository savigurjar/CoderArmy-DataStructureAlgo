//  1. Two numbers are given, print the bigger number, It is given that
//  both numbers can’t be the same

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a > b)
    {
        cout << "a is greater";
    }
    else if (b > a)
    {
        cout << "b is greater";
    }
    else
    {
        cout << "Both number can not be same";
    }

    return 0;
}