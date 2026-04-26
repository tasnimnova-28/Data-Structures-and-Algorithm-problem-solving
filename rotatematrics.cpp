#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter number of positions to rotate (k): ";
    cin >> k;

    k = k % n;

    rotate(arr, arr + (n - k), arr + n);

    cout << "Array after right rotation: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}