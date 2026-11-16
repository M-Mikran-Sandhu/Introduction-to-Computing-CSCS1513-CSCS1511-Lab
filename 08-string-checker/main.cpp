#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string text;
    cout << "Enter a word or sentence: ";
    getline(cin, text);

    int length = text.length();

    // Part 1: count vowels and consonants
    int vowels = 0;
    int consonants = 0;

    for (int i = 0; i < length; i++) {
        char c = tolower(text[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowels++;
        } else if (c >= 'a' && c <= 'z') {
            consonants++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    // Part 2: palindrome check (letters only, ignoring case)
    string cleaned = "";
    for (int i = 0; i < length; i++) {
        if (isalpha(text[i])) {
            cleaned = cleaned + (char)tolower(text[i]);
        }
    }

    int n = cleaned.length();

    if (n == 0) {
        cout << "No letters to check for a palindrome." << endl;
    } else {
        bool isPalindrome = true;
        for (int i = 0; i < n / 2; i++) {
            if (cleaned[i] != cleaned[n - 1 - i]) {
                isPalindrome = false;
            }
        }

        if (isPalindrome) {
            cout << "It is a palindrome." << endl;
        } else {
            cout << "It is not a palindrome." << endl;
        }
    }

    return 0;
}