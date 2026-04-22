#include <iostream>
using namespace std;

int main() {
    int a, b;

    try {
        cout << "Enter two integers: ";
        cin >> a >> b;

        // check invalid input
        if (cin.fail()) {
            throw "Invalid input!";
        }

        // check division by zero
        if (b == 0) {
            throw "Cannot divide by zero!";
        }

        cout << "Result: " << a / b << endl;
    }
    catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }

    return 0;
}
