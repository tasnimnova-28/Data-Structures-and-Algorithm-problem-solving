#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;

    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter k: ";
    cin >> k;

    k = k % n;

    // Left rotation using reversal
    reverse(arr, arr + k);
    reverse(arr + k, arr + n);
    reverse(arr, arr + n);

    cout << "After rotation: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}