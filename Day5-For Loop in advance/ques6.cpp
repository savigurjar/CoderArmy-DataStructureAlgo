//   6. Print Sum of cube of first n natural numbe
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number : ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i * i*i;
    }
    cout << "Sum of cube of first " << n << " natural numbers is: " << sum << endl;
}