#include <iostream>
using namespace std;
int main()
{
    // decimal to binary conversion using while loop

    int num;
    cout << "enter number: ";
    cin >> num;
    int ans = 0, mul = 1;

    while (num > 0)
    {
        // int rem = num % 2;
        int rem = num & 1;

        // num = num / 2;
        num = num >> 1;
        ans = rem * mul + ans;
        mul = mul * 10;
    }
    cout << " binary conversion is : " << ans << endl;
    return 0;
}