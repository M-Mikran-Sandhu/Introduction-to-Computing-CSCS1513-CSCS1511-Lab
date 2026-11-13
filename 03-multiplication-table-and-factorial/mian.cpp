#include <iostream>
using namespace std;

int main() {
    // Part 1: multiplication table
    int n;
    cout << "Enter a number for its multiplication table: ";
    cin >> n;

    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    // Part 2: factorial
    int f;
    cout << "Enter a number for its factorial (0 to 12): ";
    cin >> f;

    if (f < 0 || f > 12) {
        cout << "Error: please enter a number from 0 to 12." << endl;
    } else {
        int result = 1;
        for (int i = 1; i <= f; i++) {
            result = result * i;
        }
        cout << f << "! = " << result << endl;
    }
    return 0;
}