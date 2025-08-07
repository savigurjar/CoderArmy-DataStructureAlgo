#include <iostream>
using namespace std;
int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}
int nCr(int n, int r)
{

    return factorial(n) / (factorial(r) * factorial(n - r));
}
int main()
{
    int n, r;
    cout << "enter n and r : ";
    cin >> n >> r;

    if (r > n || n < 0 || r < 0)
    {
        cout << "invaid r and n";
    }
    else
    {
        cout << "nCr is : " << nCr(n, r) << endl;
    }
}