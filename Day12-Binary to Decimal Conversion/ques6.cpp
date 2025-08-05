//  Write a program to convert Octal numbers to binary number
#include <iostream>
using namespace std;

int main()
{
    int octal;
    cout << "Enter binary number: ";
    cin >> octal;

    int decimal = 0, mul = 1;
    int temp = octal;
    // octal to decimal
    while (temp > 0)
    {
        int rem = temp % 10;
        temp /= 10;
        decimal += rem * mul;
        mul *= 8;
    }

    // decimal to binary
    int binary = 0;
    mul = 1;
    while (decimal > 0)
    {
        int rem = octal % 2;
        octal /= 2;
        binary += rem * mul;
        mul *= 10;
    }

    cout << "octal to binary : " << binary << endl;
}