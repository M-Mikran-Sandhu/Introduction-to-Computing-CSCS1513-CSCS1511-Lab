#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "How many numbers (1 to 50)? ";
    cin >> n;

    if (n < 1 || n > 50) {
        cout << "Error: please enter a number from 1 to 50." << endl;
        return 0;
    }

    int numbers[50];

    // Read the numbers into the array
    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Find sum, min and max
    int sum = 0;
    int min = numbers[0];
    int max = numbers[0];

    for (int i = 0; i < n; i++) {
        sum = sum + numbers[i];
        if (numbers[i] < min) {
            min = numbers[i];
        }
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    double average = (double)sum / n;

    // Print results
    cout << "\nNumbers: ";
    for (int i = 0; i < n; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    cout << "Sum: " << sum << endl;
    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;
    cout << "Average: " << average << endl;

    return 0;
}