#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of the array: \n";
    cin >> n;
    int a[n];
    cout<<"Enter the elements of the array: \n";
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    //bubble sort step by step
    for(int i=0; i<n-1; i++){
        int swapped=0;
        for(int j=0; j<n-i-1; j++){
            if(a[j] > a[j+1]){
                swap(a[j], a[j+1]);
                swapped=1;
            }
        }
        if(swapped==0){
            break;
        }
    }
    cout<<"Sorted Array: "<<endl;
        for(int i=0; i<n; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    return 0;
}