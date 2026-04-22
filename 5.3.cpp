#include <iostream>
using namespace std;

// user-defined currency function
ostream& currency(ostream& out) {
    out << "$ ";
    return out;
}

int main() {
    string name1 = "Alice";
    string name2 = "Bob";

    float marks1 = 85.5;
    float marks2 = 90.2;

    int fees1 = 5000;
    int fees2 = 6000;

    cout << "Name   Marks   Fees" << endl;
    cout << "------------------------" << endl;

    cout << name1 << "   " << marks1 << "   ";
    cout << currency << fees1 << endl;

    cout << name2 << "   " << marks2 << "   ";
    cout << currency << fees2 << endl;

    return 0;
}
