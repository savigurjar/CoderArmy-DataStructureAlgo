#include <iostream>
using namespace std;
int main()
{
    char arr[26];
    int n;
    cout << "enter size: ";
    cin >> n;

    cout << "enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        int index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }

    cout << "sorted arry : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}