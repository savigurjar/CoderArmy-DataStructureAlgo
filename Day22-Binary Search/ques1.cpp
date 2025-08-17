#include <iostream>
using namespace std;
int main()
{
    int arr[1000];
    int n;
    cout << "enter size : ";
    cin >> n;

    cout << "enter elememts in array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "enter key: ";
    cin >> key;

    int index = -1;
    int start = 0, end = n - 1, mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            index = mid;
            break;
        }
        else if (arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
    }
    if (index == -1)
        cout << "element is not present";
    else
        cout << "found at " << index << endl;
}