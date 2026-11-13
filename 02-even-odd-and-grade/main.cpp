#include <iostream>
using namespace std;

int main() {
    // Part 1: even or odd
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << number << " is even." << endl;
    } else {
        cout << number << " is odd." << endl;
    }

    // Part 2: grade from marks
    double marks;
    cout << "Enter your marks (0-100): ";
    cin >> marks;

    if (marks < 0 || marks > 100) {
        cout << "Error: marks must be between 0 and 100." << endl;
    } else if (marks >= 90) {
        cout << "Grade: A" << endl;
    } else if (marks >= 80) {
        cout << "Grade: B" << endl;
    } else if (marks >= 70) {
        cout << "Grade: C" << endl;
    } else if (marks >= 60) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F" << endl;
    }
    return 0;
}