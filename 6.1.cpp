#include <iostream>
using namespace std;

class Shape {
protected:
    float radius;

public:
    void setRadius(float r) {
        radius = r;
    }

    float getRadius() {
        return radius;
    }
};

class Circle : public Shape {
public:
    float area() {
        return 3.14 * radius * radius;
    }
};

int main() {
    int n;
    cout << "Enter number of circles: ";
    cin >> n;

    Circle c[10];

    for (int i = 0; i < n; i++) {
        float r;
        cout << "Enter radius: ";
        cin >> r;
        c[i].setRadius(r);
    }

    cout << "\nAreas:\n";
    for (int i = 0; i < n; i++) {
        cout << c[i].area() << endl;
    }

    return 0;
}
