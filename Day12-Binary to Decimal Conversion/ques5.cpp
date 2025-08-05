//  Write a program to convert binary to Octal numbers
#include <iostream>
using namespace std;

int main()
{
    int binary;
    cout << "Enter binary number: ";
    cin >> binary;

    int decimal = 0, mul = 1;

    // Step 1: Binary to Decimal
    int temp = binary;
    while (temp > 0)
    {
        int rem = temp % 10;
        if (rem != 0 && rem != 1)
        {
            cout << "Invalid binary number!" << endl;
            return 1;
        }
        decimal += rem * mul;
        mul *= 2;
        temp /= 10;
    }

    // Step 2: Decimal to Octal
    int octal = 0;
    mul = 1;
    while (decimal > 0)
    {
        int rem = decimal % 8;
        octal += rem * mul;
        mul *= 10;
        decimal /= 8;
    }

    cout << "Binary to octal: " << octal << endl;
    return 0;
}
