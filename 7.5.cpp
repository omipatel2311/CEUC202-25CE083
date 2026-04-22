#include <iostream>
using namespace std;

// Abstract class
class Student {
protected:
    int marks;

public:
    void setMarks(int m) {
        marks = m;
    }

    // pure virtual function
    virtual void grade() = 0;
};

// Undergraduate class
class Undergraduate : public Student {
public:
    void grade() {
        if (marks >= 50)
            cout << "Undergraduate Pass\n";
        else
            cout << "Undergraduate Fail\n";
    }
};

// Postgraduate class
class Postgraduate : public Student {
public:
    void grade() {
        if (marks >= 60)
            cout << "Postgraduate Pass\n";
        else
            cout << "Postgraduate Fail\n";
    }
};

int main() {
    Undergraduate u;
    Postgraduate p;

    u.setMarks(55);
    p.setMarks(55);

    u.grade();
    p.grade();

    return 0;
}
