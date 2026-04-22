#include <iostream>
using namespace std;

// Recursive function to find super digit
int superDigit(long long n) {
    // Base case: single digit
    if (n < 10)
        return n;

    long long sum = 0;

    // Sum of digits
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    // Recursive call
    return superDigit(sum);
}

int main() {
    string n;
    int k;

    cout << "Enter number (as string): ";
    cin >> n;
    cout << "Enter k: ";
    cin >> k;

    long long initialSum = 0;

    // Sum digits of string n
    for (char c : n) {
        initialSum += c - '0';
    }

    // Multiply sum by k (instead of concatenation)
    initialSum *= k;

    // Find super digit
    int result = superDigit(initialSum);

    cout << "Super Digit: " << result << endl;

    return 0;
}
