#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows (1 to 5): ";
    cin >> rows;
    cout << "Enter number of columns (1 to 5): ";
    cin >> cols;

    if (rows < 1 || rows > 5 || cols < 1 || cols > 5) {
        cout << "Error: rows and columns must be from 1 to 5." << endl;
        return 0;
    }

    int a[5][5];
    int b[5][5];
    int sum[5][5];
    int transpose[5][5];

    // Read matrix A
    cout << "\nEnter elements of matrix A:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    // Read matrix B
    cout << "\nEnter elements of matrix B:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> b[i][j];
        }
    }

    // Addition: add matching positions
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Transpose of A: rows become columns
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = a[i][j];
        }
    }

    // Print A + B
    cout << "\nA + B:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << sum[i][j] << "\t";
        }
        cout << endl;
    }

    // Print transpose of A (it has cols rows and rows columns)
    cout << "\nTranspose of A:" << endl;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}