#include <iostream>
using namespace std;

class Complex {
    float real, imag;
public:
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }
    Complex operator+(Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }
    Complex operator-(Complex c) {
        return Complex(real - c.real, imag - c.imag);
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};
int main() {
    Complex c1, c2, sum, diff;

    cout << "Enter real and imaginary part of first complex number: ";
    float r1, i1;
    cin >> r1 >> i1;
    c1 = Complex(r1, i1);

    cout << "Enter real and imaginary part of second complex number: ";
    float r2, i2;
    cin >> r2 >> i2;
    c2 = Complex(r2, i2);

    sum = c1 + c2;
    diff = c1 - c2;

    cout << "Sum: ";
    sum.display();
    cout << "Difference: ";
    diff.display();

    return 0;
}

