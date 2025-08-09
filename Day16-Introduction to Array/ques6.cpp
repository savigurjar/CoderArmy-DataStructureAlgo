#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;

    int arr[size];
    cout << "Enter elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int first = INT_MIN;
    int second = INT_MIN;
    int third = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] < first)
        {
            third = second;
            second = arr[i];
        }
        else if (arr[i] > third && arr[i] < second)
        {
            third = arr[i];
        }
    }

    if (third == INT_MIN)
        cout << "No third largest element (array too small or duplicates)" << endl;
    else
        cout << "Third largest: " << third << endl;
}
