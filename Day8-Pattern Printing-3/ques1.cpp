// a
// b b
// c c c
// d d d d
// e e e e e

#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "enter row and col : ";
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        char ch = 'a' + i - 1;
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}