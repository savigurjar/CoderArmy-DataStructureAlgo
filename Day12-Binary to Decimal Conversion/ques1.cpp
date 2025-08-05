// ● Write a program to convert binary numbers to decimal numbers
//  using a for loop.

#include <iostream>
using namespace std;
int main()
{

    int num;
    cout << "enter number: ";
    cin >> num;

    int ans = 0, mul = 1, rem;
    for (; num > 0; num /= 10)
    {
        rem = num % 10;
        if (rem != 0 && rem != 1)
        {
            cout << "invalid binary";
            return 1;
        }
        ans += rem * mul;
        mul *= 2;
    }
    cout << "decimal num is: " << ans << endl;
}