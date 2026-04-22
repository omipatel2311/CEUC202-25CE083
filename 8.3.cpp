#include <iostream>
using namespace std;

class Bank {
    int balance;

public:
    Bank() {
        balance = 1000; // initial money
    }

    void deposit(int amount) {
        if (amount <= 0)
            throw "Invalid deposit!";
        balance += amount;
    }

    void withdraw(int amount) {
        if (amount > balance)
            throw "Insufficient balance!";
        balance -= amount;
    }

    void show() {
        cout << "Balance = " << balance << endl;
    }
};

int main() {
    Bank b;

    try {
        b.deposit(500);
        b.withdraw(2000); // error
    }
    catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }

    b.show();

    return 0;
}
