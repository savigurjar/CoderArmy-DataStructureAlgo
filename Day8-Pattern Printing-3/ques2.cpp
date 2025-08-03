//         1
//       2 1
//     3 2 1
//   4 3 2 1
// 5 4 3 2 1

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print spaces first
        for (int space = 1; space <= n - i; space++) {
            cout << "  "; // 2 spaces for alignment
        }

        // Print numbers in reverse
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
