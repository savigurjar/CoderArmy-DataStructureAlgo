#include <iostream>
using namespace std;
void print(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << " Hello Coder Army" << endl;
    }
}
int main()
{
    int n;
    cout << "enter nu: ";
    cin >> n;
    print(n);
}