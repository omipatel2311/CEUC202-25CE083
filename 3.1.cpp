#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    float basicSalary;
    float bonus;

public:
    // Constructor with default bonus
    Employee(string n, float salary) {
        name = n;
        basicSalary = salary;
        bonus = 1000; // default bonus
    }

    // Constructor with custom bonus
    Employee(string n, float salary, float b) {
        name = n;
        basicSalary = salary;
        bonus = b;
    }

    // Inline function to calculate total salary
    inline float totalSalary() {
        return basicSalary + bonus;
    }

    // Display function
    void display() {
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << totalSalary() << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    // Dynamic allocation
    Employee* emp = new Employee[n];

    for (int i = 0; i < n; i++) {
        string name;
        float salary, bonus;
        int choice;

        cout << "\nEmployee " << i + 1 << endl;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter basic salary: ";
        cin >> salary;

        cout << "Use default bonus? (1=Yes, 0=No): ";
        cin >> choice;

        if (choice == 1) {
            emp[i] = Employee(name, salary);
        } else {
            cout << "Enter bonus: ";
            cin >> bonus;
            emp[i] = Employee(name, salary, bonus);
        }
    }

    cout << "\nEmployee Details:\n";
    for (int i = 0; i < n; i++) {
        emp[i].display();
    }

    delete[] emp; // free memory
    return 0;
}
