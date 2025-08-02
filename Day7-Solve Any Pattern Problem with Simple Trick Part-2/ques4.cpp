// FourthPattern:
//  ABCD
//  ABC
//  AB
//  A

#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "enter row and col : ";
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = i; j <= m; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}