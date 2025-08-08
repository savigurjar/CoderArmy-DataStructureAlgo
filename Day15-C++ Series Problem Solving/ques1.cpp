#include <iostream>
#include <algorithm> // for min, max, swap, sort, reverse
#include <vector>
using namespace std;

int main() {
    int a = 5, b = 10;

    cout << "Min of a and b: " << min(a, b) << endl;
    cout << "Max of a and b: " << max(a, b) << endl;

    swap(a, b);
    cout << "After swap: a = " << a << ", b = " << b << endl;

    vector<int> nums = {5, 2, 8, 1, 9};

    sort(nums.begin(), nums.end());
    cout << "Sorted: ";
    for (int n : nums) cout << n << " ";
    cout << endl;

    reverse(nums.begin(), nums.end());
    cout << "Reversed: ";
    for (int n : nums) cout << n << " ";
    cout << endl;

    return 0;
}
