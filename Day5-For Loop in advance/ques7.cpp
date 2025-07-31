//    7. Print n’th Fibonacci number
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the position (n): ";
    cin >> n;

    int a = 0, b = 1, fib;

    if (n == 0)
    {
        cout << "Fibonacci number at position 0 is: 0" << endl;
    }
    else if (n == 1)
    {
        cout << "Fibonacci number at position 1 is: 1" << endl;
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            fib = a + b;
            a = b;
            b = fib;
        }
        cout << "Fibonacci number at position " << n << " is: " << b<< endl;
    }

    return 0;
}
