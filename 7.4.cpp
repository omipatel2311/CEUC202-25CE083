#include <iostream>
using namespace std;

class Shape {
public:
    virtual float Area() {
        return 0;
    }
};
class Rectangle : public Shape {
    float length, width;
public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }
    float Area() {
        return length * width;
    }
};
class Circle : public Shape {
    float radius;
public:
    Circle(float r) {
        radius = r;
    }
    float Area() {
        return 3.14159f * radius * radius;
    }
};
int main() {
    Shape *s;
    float l, w;
    cout << "Enter length and width of rectangle: ";
    cin >> l >> w;
    Rectangle rect(l, w);
    s = &rect;
    cout << "Area of Rectangle = " << s->Area() << endl;

    float r;
    cout << "Enter radius of circle: ";
    cin >> r;
    Circle cir(r);
    s = &cir;
    cout << "Area of Circle = " << s->Area() << endl;

    return 0;
}

