//  FirstPattern:
//  1
//  12
//  123
//  1234
//  12345
//  123456
//  123456

#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "enter row and col : ";
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        int count = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}