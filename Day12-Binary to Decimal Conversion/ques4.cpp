// Write a program to convert Octal numbers to decimal numbers

#include <iostream>
using namespace std;
int main()
{

    int num;
    cout << "enter number: ";
    cin >> num;

    int ans = 0, mul = 1, rem;
    while (num > 0)
    {
        rem = num % 10;
        num /= 10;
        ans += rem * mul;
        mul *= 8;
    }
    cout << " octal to decimal : " << ans;
}