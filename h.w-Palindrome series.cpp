#include <iostream>
using namespace std;

int main() {
    int n, num, rev, rem;

    cout << "Enter the limit: ";
    cin >> n;

    cout << "Palindrome series: ";

    for (int i = 1; i <= n; i++) {
        num = i;
        rev = 0;

        while (num > 0) {
            rem = num % 10;
            rev = rev * 10 + rem;
            num = num / 10;
        }

        if (rev == i) {
            cout << i << " ";
        }
    }

    return 0;
}
