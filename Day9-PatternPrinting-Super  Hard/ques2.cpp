//    1 
//    1 2 3
//   1 2 3 4 5
//  1 2 3 4 5 6 7
// 1 2 3 4 5 6 7 8 9 


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
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}