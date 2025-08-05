//  1: Take a number n from the user and print all the even numbers
//  between 1 and n(inclusive). Do this using while and do while loop
//  separately


#include <iostream>
using namespace std;
// while loop
/*int main()
{
    int n;
    cout << "enter number : ";
    cin >> n;

    int i = 0;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
        i++;
    }
}*/

// do while
int main()
{
    int n;
    cout << "enter number : ";
    cin >> n;

    int i = 0;
    do
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
        i++;
    } while (i <= n);
}