#include <iostream>
using namespace std;
void Swap(int &a, int &b)
{
    swap(a, b);

    cout << a << " " << b;
}
int main()
{
    int a, b;
    cout << "enter a and b : ";
    cin >> a >> b;

    Swap(a, b);
}