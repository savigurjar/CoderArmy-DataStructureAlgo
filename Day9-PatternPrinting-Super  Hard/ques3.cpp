
//    A 
//    A B A
//   A B C B A
//  A B C D C B A
// A B C D E D C B A

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
        char ch = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        ch = ch - 2;
        for (int j = i - 1; j >= 1; j--)
        {

            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }
}