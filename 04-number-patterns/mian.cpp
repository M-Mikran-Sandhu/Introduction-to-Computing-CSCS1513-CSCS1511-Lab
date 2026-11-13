#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    if (rows < 1) {
        cout << "Error: rows must be at least 1." << endl;
    } else {
        // Pattern 1: right triangle of stars
        cout << "\nPattern 1: star triangle" << endl;
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= i; j++) {
                cout << "* ";
            }
            cout << endl;
        }

        // Pattern 2: number triangle
        cout << "\nPattern 2: number triangle" << endl;
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= i; j++) {
                cout << j << " ";
            }
            cout << endl;
        }

        // Pattern 3: pyramid
        cout << "\nPattern 3: pyramid" << endl;
        for (int i = 1; i <= rows; i++) {
            for (int space = 1; space <= rows - i; space++) {
                cout << " ";
            }
            for (int j = 1; j <= 2 * i - 1; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
    return 0;
}