//  6: Give a number n, find if it is prime or not, use a while loop and
//  break here to solve it

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number: ";
    cin >> n;
    if (n < 2)
        cout << "not prime";

    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << n << " number is not prime";
            break;
        }

        i++;
    }
    if (i == n)
    {
        cout << "prime";
    }
}