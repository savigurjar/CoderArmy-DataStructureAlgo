#include <iostream>
#include <climits> // for INT_MIN
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

    int largest = INT_MIN;
    int secondLarge = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            secondLarge = largest; // previous largest becomes second largest
            largest = arr[i];
        }
        else if (arr[i] > secondLarge && arr[i] < largest)
        {
            secondLarge = arr[i];
        }
    }

    if (secondLarge == INT_MIN)
        cout << "No second largest element (all elements are equal)" << endl;
    else
        cout << "Second largest: " << secondLarge << endl;
}
