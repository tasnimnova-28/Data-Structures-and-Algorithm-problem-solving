#include<bits/stdc++.h>
using namespace std;

int main() {
    int a[] = {1,2,3,4,5,6,7,8};
    int n = 8, k = 3;

    k = k % n;

    // Step 1: reverse first n-k elements
    for(int i = 0, j = n-k-1; i < j; i++, j--) {
        swap(a[i], a[j]);
    }

    // Step 2: reverse last k elements
    for(int i = n-k, j = n-1; i < j; i++, j--) {
        swap(a[i], a[j]);
    }

    // Step 3: reverse whole array
    for(int i = 0, j = n-1; i < j; i++, j--) {
        swap(a[i], a[j]);
    }

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}



/*#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;

    // STEP 1: input size
    cin >> n;

    int a[n];

    // STEP 2: input array elements
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // STEP 3: input rotation value
    cin >> k;

    k = k % n;

    // Step 4: reverse first n-k elements
    for(int i = 0, j = n-k-1; i < j; i++, j--) {
        swap(a[i], a[j]);
    }

    // Step 5: reverse last k elements
    for(int i = n-k, j = n-1; i < j; i++, j--) {
        swap(a[i], a[j]);
    }

    // Step 6: reverse whole array
    for(int i = 0, j = n-1; i < j; i++, j--) {
        swap(a[i], a[j]);
    }

    // STEP 7: print result
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;

int main() {
    int a[1000];
    int n, k;

    cin >> n;

    // input array
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> k;

    k = k % n;

    // Step 1: reverse first k elements
    for(int i = 0, j = k - 1; i < j; i++, j--) {
        swap(a[i], a[j]);
    }

    // Step 2: reverse last n-k elements
    for(int i = k, j = n - 1; i < j; i++, j--) {
        swap(a[i], a[j]);
    }

    // Step 3: reverse whole array
    for(int i = 0, j = n - 1; i < j; i++, j--) {
        swap(a[i], a[j]);
    }

    // print result
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
*/