//  3: Given a number n, print all the numbers from 1 to n(inclusive)
//  which are not divisible by 3 and 5. (use Continue here)


#include <iostream>
using namespace std;

// while loop
int main()
{
    int n;
    cout << "enter number : ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        if (i % 3 != 0 && i % 5 != 0)
        {
            cout << i << " ";
        }
        i++;
    }
}

