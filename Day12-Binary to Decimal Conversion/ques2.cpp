//  Write a program to convert decimal numbers to binary numbers
//  using a for loop

#include <iostream>
using namespace std;
int main()
{

    int num;
    cout << "enter number: ";
    cin >> num;

    int ans = 0, mul = 1, rem;
    for (; num > 0; num /= 2)
    {
        rem = num % 2;

        ans += rem * mul;
        mul *= 10;
    }
    cout << "binary num is: " << ans << endl;
}