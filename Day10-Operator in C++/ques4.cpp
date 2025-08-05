//  4: Take three numbers a,b,c from the user, print yes if a is either greater
//  than b or c. Otherwise print NO

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << " enter a and b and c : ";
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        cout << "a is greater";
    }
    else
    {

        cout << "no";
    }
}