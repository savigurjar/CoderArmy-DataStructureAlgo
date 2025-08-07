#include <iostream>
using namespace std;
void three(int &a, int &b, int &c)
{
    int temp = a;
    a = c;
    c = b;
    b = temp;

    cout << a << " " << b << " " << c;
}
int main()
{
    int a, b, c;
    cout << "enter a , b and c : ";
    cin >> a >> b >> c;
    three(a, b, c);
}