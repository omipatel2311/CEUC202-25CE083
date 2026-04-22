#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float n;
    cout << "Enter number: ";
    cin >> n;

    try {
        if (n < 0)
            throw 1;   // simple exception

        cout << "Square root = " << sqrt(n);
    }
    catch (...) {
        cout << "Error: Negative number!";
    }

    return 0;
}
