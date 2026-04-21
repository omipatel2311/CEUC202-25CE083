#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    float add(float a, float b) {
        return a + b;
    }

    float add(int a, float b) {
        return a + b;
    }
};

int main() {
    Calculator c;
    int choice;

    cout << "Choose operation type:\n";
    cout << "1. int + int\n";
    cout << "2. float + float\n";
    cout << "3. int + float\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        int x, y;
        cout << "Enter two integers: ";
        cin >> x >> y;
        cout << "Result: " << c.add(x, y) << endl;
    }
    else if (choice == 2) {
        float p, q;
        cout << "Enter two floats: ";
        cin >> p >> q;
        cout << "Result: " << c.add(p, q) << endl;
    }
    else if (choice == 3) {
        int x;
        float p;
        cout << "Enter one int and one float: ";
        cin >> x >> p;
        cout << "Result: " << c.add(x, p) << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
