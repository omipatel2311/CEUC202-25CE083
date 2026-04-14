#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person(string n, int a)
    {
        name = n;
        age = a;
    }
};

class Employee : public Person
{
protected:
    int empID;

public:
    Employee(string n, int a, int id) : Person(n, a)
    {
        empID = id;
    }
};
class Manager : public Employee
{
    string dept;

public:
    Manager(string n, int a, int id, string d)
        : Employee(n, a, id)
    {
        dept = d;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "ID: " << empID << endl;
        cout << "Department: " << dept << endl;
    }
};

int main()
{
    Manager m("Omi", 20, 101, "CE");
    m.display();

    return 0;
}
