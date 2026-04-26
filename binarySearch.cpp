#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of the array: \n";
    cin >> n;
    int a[n];
    cout<<"Enter the elements of the array: \n";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int target;
    cout<<"Enter the target element: \n";
    cin >> target;
    int left=0, right=n-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(a[mid]== target) {
            cout << "Element found at index: " << mid << endl;
            return 0;
        }
        else if(a[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    cout << "Element not found" << endl;
    return 0;
}