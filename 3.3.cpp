#include <iostream>
#include <vector>
using namespace std;

class Account {
private:
    int accNumber;
    string name;
    double balance;

public:
    static int totalAccounts;

    Account(int accNo, string accName, double bal) {
        accNumber = accNo;
        name = accName;
        balance = bal;
        totalAccounts++;
    }

    void display() {
        cout << "\nAccount Number: " << accNumber;
        cout << "\nName: " << name;
        cout << "\nBalance: " << balance << endl;
    }

    int getAccNumber() {
        return accNumber;
    }

    double getBalance() {
        return balance;
    }

    void deposit(double amount) {
        balance += amount;
    }

    bool withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!\n";
            return false;
        }
        balance -= amount;
        return true;
    }
};

int Account::totalAccounts = 0;

Account* findAccount(vector<Account> &accounts, int accNo) {
    for (auto &acc : accounts) {
        if (acc.getAccNumber() == accNo) {
            return &acc;
        }
    }
    return nullptr;
}

int main() {
    vector<Account> accounts;


    accounts.push_back(Account(101, "Omi", 5000));
    accounts.push_back(Account(102, "Rahul", 3000));


    cout << "\n--- Account Details ---";
    for (auto &acc : accounts) {
        acc.display();
    }


    int fromAcc = 101, toAcc = 102;
    double amount = 1000;

    Account *sender = findAccount(accounts, fromAcc);
    Account *receiver = findAccount(accounts, toAcc);

    if (sender && receiver) {
        if (sender->withdraw(amount)) {
            receiver->deposit(amount);
            cout << "\nTransfer Successful!\n";
        }
    } else {
        cout << "\nInvalid account number!\n";
    }


    cout << "\n--- Updated Account Details ---";
    for (auto &acc : accounts) {
        acc.display();
    }

    cout << "\nTotal Accounts Created: " << Account::totalAccounts << endl;

    return 0;
}
