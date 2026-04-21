#include <iostream>
using namespace std;

class Fahrenheit;
class Celsius {
    float c;
public:
    Celsius(float temp = 0) { c = temp; }
    operator Fahrenheit();

    float getC()
     {
          return c;
     }
};
class Fahrenheit {
    float f;
public:
    Fahrenheit(float temp = 0) { f = temp; }
    operator Celsius() {
        return Celsius((f - 32) * 5.0 / 9.0);
    }

    float getF() { return f; }
};
Celsius::operator Fahrenheit() {
    return Fahrenheit((c * 9.0 / 5.0) + 32);
}
bool operator==(Celsius c, Fahrenheit f) {
    return ( (c.getC() * 9.0 / 5.0 + 32) == f.getF() );
}

int main() {
    float temp;
    cout << "Enter temperature in Celsius: ";
    cin >> temp;
    Celsius c(temp);

    Fahrenheit f = c;
    cout << "In Fahrenheit: " << f.getF() << endl;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> temp;
    Fahrenheit f2(temp);

    Celsius c2 = f2;
    cout << "In Celsius: " << c2.getC() << endl;
    if (c == f2)
        cout << "Temperatures are equal!" << endl;
    else
        cout << "Temperatures are not equal!" << endl;

    return 0;
}

