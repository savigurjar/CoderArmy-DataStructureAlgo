//     *
//    * *
//   * * *
//  * * * *
// * * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter nu of rows : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        for (int s = 1; s <= n - i; s++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {

        for (int s = 1; s <= n - i; s++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}