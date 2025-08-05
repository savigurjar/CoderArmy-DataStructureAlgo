//  Write a program to convert decimal numbers to Octal numbers.

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
        rem = num % 8;
        num /= 8;
        ans += rem * mul;
        mul *= 10;
    }
    cout << "decimal to octal number : " << ans << endl;
}