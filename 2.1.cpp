#include <iostream>
using namespace std;

class Rectangle {
private:
    float length, width;

public:
    void set(float l, float w) {
        if (l > 0 && w > 0) {
            length = l;
            width = w;
        }
    }

    float area() {
        return length * width;
    }

    float perimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle r;
    r.set(10, 5);

    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;
    return 0;
}
