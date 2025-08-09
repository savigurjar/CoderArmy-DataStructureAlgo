#include <iostream>
using namespace std;
int main()
{
    int size = 18;
    cout << "enter the ele of array: ";
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    int avg = sum / size;
    cout << "the average of the ele : " << avg << endl;
}