#include <iostream>
#include <cmath>
using namespace std;

bool Armstrong(int num, int digit)
{
    int n = num, ans = 0, rem;
    while (n)
    {
        rem = n % 10;              //
        n /= 10;                   // 
        // ans += pow(rem, digit);    //
        ans += (int)round(pow(rem, digit));
    }
    return ans == num;
}

int countDigit(int num)
{
    int count = 0;
    while (num)
    {
        count++;
        num /= 10;
    }
    return count;
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    int digit = countDigit(num);
    if (Armstrong(num, digit))
        cout << "Yes, Armstrong number" << endl;
    else
        cout << "No, not an Armstrong number" << endl;
}
