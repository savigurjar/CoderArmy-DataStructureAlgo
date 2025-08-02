// ThirdPattern:
//  10
//  1011
//  101112
//  10111213
//  1011121314
//  101112131415

#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "enter row and col : ";
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        int count = 10;
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}