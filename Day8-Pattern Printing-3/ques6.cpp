//         5 
//       5 4
//     5 4 3
//   5 4 3 2
// 5 4 3 2 1

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    
    for (int i=1;i<=n;i++)
    {
        for (int s = 1; s <= n - i; s++)
        {
            cout << "  ";
        }
        for (int j=n;j>=n-i+1;j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}