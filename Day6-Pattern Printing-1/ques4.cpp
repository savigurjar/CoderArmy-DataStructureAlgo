// Fourth Pattern:
//  F GHIJK
//  F GHIJK
//  F GHIJK
//  F GHIJK
//  F GHIJK

#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "enter n and m: ";
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        cout << "F ";
        for (char j = 'G'; j <= 'K'; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}