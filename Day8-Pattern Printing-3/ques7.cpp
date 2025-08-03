//         E 
//       E D 
//     E D C
//   E D C B
// E D C B A
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        char ch = 'E';
        for (int s = 1; s <= n - i; s++)
        {
            cout << "  ";
        }
        for (int j = n; j >= n - i + 1; j--)
        {
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }
}