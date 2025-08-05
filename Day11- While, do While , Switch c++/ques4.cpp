//  4: Given a number n, print the corresponding month of it. For n=1,
//  print Jan, n=2, print Feb…, if the user puts any invalid number,
//  don’t do anything. (Use switch here

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter number : ";
    cin >> n;

    switch (n)
    {
    case 1:

        cout << "january";
        break;
    case 2:

        cout << "febuary";
        break;
    case 3:

        cout << "march";
        break;
    case 4:

        cout << "april";
        break;
    case 5:

        cout << "may";
        break;
    case 6:

        cout << "jun";
        break;
    case 7:

        cout << "july";
        break;
    case 8:

        cout << "august";
        break;
    case 9:

        cout << "september";
        break;
    case 10:

        cout << "october";
        break;
    case 11:

        cout << "november";
        break;
    case 12:

        cout << "december";
        break;
    default:
        cout << "invalid month";
    }
}