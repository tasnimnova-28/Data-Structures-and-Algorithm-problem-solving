#include<bits/stdc++.h>
using namespace std;

int main() {
    int row, col;
    cout << "Enter rows and columns: ";
    cin >> row >> col;

    int a[100][100], t[100][100];

    // Input matrix
    cout << "Enter matrix elements: ";
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> a[i][j];
        }
    }

    // Print original matrix
    cout << "\nOriginal Matrix: ";
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // Transpose
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            t[j][i] = a[i][j];
        }
    }

    // Print transpose
    cout << "\nTranspose Matrix: ";
    for(int i = 0; i < col; i++) {
        for(int j = 0; j < row; j++) {
            cout << t[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
