#include <iostream>
using namespace std;

class Account {
private:
    int accId;
    string name;
    double balance;

public:
    Account(int id, string n, double b = 0) {
        accId = id;
        name = n;
        balance = b;
    }

    void deposit(double amt) {
        if (amt > 0)
            balance += amt;
    }

    void withdraw(double amt) {
        if (amt <= balance)
            balance -= amt;
        else
            cout << "Insufficient balance\n";
    }

    void display() {
        cout << accId << " " << name << " Balance: " << balance << endl;
    }
};

int main() {
    Account a1(101, "Omi", 1000);

    a1.deposit(500);
    a1.withdraw(300);
    a1.withdraw(2000);

    a1.display();
    return 0;
}
