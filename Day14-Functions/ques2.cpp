#include <iostream>
using namespace std;
int reverse(int &n)
{
    int ans = 0, rem;
    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
        ans = ans * 10 + rem;
    }
    return ans;
}
int main()
{
    int n;
    cout << "enter number: ";
    cin >> n;

    cout << "reverse : " << reverse(n) << endl;
}