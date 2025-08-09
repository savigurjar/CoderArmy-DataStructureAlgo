#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "enter size : ";
    cin >> size;
    int arr[size];
    cout << "enter the ele of array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int index = -1;
    int ele;
    cout << "enter element to search : ";
    cin >> ele;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == ele)
        {
            index = i;
            cout << "element found at index: " << index << endl;
            break;
        }
    }
}