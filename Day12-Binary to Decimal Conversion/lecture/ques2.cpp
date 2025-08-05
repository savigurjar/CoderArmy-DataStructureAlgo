#include <iostream>
using namespace std;
int main()
{
    //  binary to  conversion using while loop

    int num;
    cout << "enter binary number: ";
    cin >> num;
    int ans = 0, mul = 1;

    while (num > 0)
    {
        int rem = num % 10;
        num /= 10;
        ans += rem * mul;
        mul = mul * 2;
    }
    cout << " decimal conversion is : " << ans << endl;
    return 0;
}