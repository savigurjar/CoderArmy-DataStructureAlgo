//  ThirdPattern:
//  182764125216
//  182764125216
//  182764125216
//  182764125216
//  182764125216

#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "enter n and m: ";
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << j * j * j << " ";
        }
        cout << endl;
    }
}