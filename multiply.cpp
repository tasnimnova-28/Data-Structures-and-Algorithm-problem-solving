#include<bits/stdc++.h>
using namespace std;

int main() {
    int p, q, r;

    cout << "Enter P, Q (for first matrix): ";
    cin >> p >> q;

    cout << "Enter R (for second matrix Q x R): ";
    cin >> r;

    int A[100][100], B[100][100], C[100][100];

    // Input first matrix
    cout << "\nEnter first matrix (" << p << "x" << q << "):\n";
    for(int i = 0; i < p; i++) {
        for(int j = 0; j < q; j++) {
            cin >> A[i][j];
        }
    }

    // Input second matrix
    cout << "\nEnter second matrix (" << q << "x" << r << "):\n";
    for(int i = 0; i < q; i++) {
        for(int j = 0; j < r; j++) {
            cin >> B[i][j];
        }
    }

    // Initialize result matrix with 0
    for(int i = 0; i < p; i++) {
        for(int j = 0; j < r; j++) {
            C[i][j] = 0;
        }
    }

    // Matrix multiplication
    for(int i = 0; i < p; i++) {
        for(int j = 0; j < r; j++) {
            for(int k = 0; k < q; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print result
    cout << "\nResultant Matrix (" << p << "x" << r << "):\n";
    for(int i = 0; i < p; i++) {
        for(int j = 0; j < r; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
