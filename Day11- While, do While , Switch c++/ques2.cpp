//  2: Find the factorial of a number n using a while loop and do a
//  while loop



#include <iostream>
using namespace std;
// while loop
// int main()
// {
//     int n;
//     cout << "enter number : ";
//     cin >> n;

//     int fact = 1, i = 1;
//     while (i < n)
//     {
//         fact += fact * i;
//         i++;
//     }
//     cout << fact;
// }

// do while loop
int main()
{
    int n;
    cout << "enter number : ";
    cin >> n;

    int fact = 1, i = 1;

    do
    {
        fact += fact * i;
        i++;
    } while (i < n);
    cout << fact;
}