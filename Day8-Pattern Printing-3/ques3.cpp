//         A 
//       B B
//     C C C
//   D D D D
// E E E E E


#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        char ch = 'A' + (i - 1);
        for (int s = 1; s <= n - i; s++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}