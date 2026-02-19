#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;
    float m1, m2, m3;

public:
    Student() {
        roll = 1;
        name = "Test";
        m1 = m2 = m3 = 50;
    }

    Student(int r, string n, float a, float b, float c) {
        roll = r;
        name = n;
        m1 = a; m2 = b; m3 = c;
    }

    float average() {
        return (m1 + m2 + m3) / 3;
    }

    void display() {
        cout << roll << " " << name << " Avg: " << average() << endl;
    }
};

int main() {
    Student s1;
    Student s2(2, "Omi", 80, 75, 85);

    s1.display();
    s2.display();
    return 0;
}
