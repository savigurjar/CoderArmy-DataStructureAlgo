//  SecondPattern:
//  A
//  AB
//  ABC
//  ABCD
//  ABCDE

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
        for (int j = 1; j <= i; j++)
        {

            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}