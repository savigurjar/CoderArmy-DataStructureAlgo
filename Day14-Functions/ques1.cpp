#include <iostream>
using namespace std;
int cube(int n)
{
    return n * n * n;
}
int main()
{
    int n;
    cout << "enter nu: ";
    cin >> n;

    cout << cube(n);
}