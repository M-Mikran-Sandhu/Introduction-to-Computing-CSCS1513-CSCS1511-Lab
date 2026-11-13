#include <iostream>
using namespace std;

// Returns true if n is a prime number, false otherwise
bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    // Part 1: check one number
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }

    // Part 2: list all primes up to a limit
    int limit;
    cout << "Print all primes up to: ";
    cin >> limit;

    cout << "Primes: ";
    for (int i = 2; i <= limit; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}