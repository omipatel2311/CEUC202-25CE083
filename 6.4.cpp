#include <iostream>
using namespace std;
class Account {
protected:
    int accNo;
    double balance;

public:
    Account(int a, double b) {
        accNo = a;
        balance = b;
    }

    void deposit(double amt) {
        balance += amt;
    }

    void display() {
        cout << "Account No: " << accNo << endl;
        cout << "Balance: " << balance << endl;
    }
};
class Savings : public Account {
    double rate;

public:
    Savings(int a, double b, double r) : Account(a, b) {
        rate = r;
    }

    void addInterest() {
        balance += balance * rate / 100;
    }
    double getRate(){
    return rate;
    }
    void display(){
    cout<<"Account No : " <<accNo<<endl;
    cout<<"Balance : " <<balance<<endl;
    cout<<"Tnterest rate: "<<rate<<" %"<<endl;
    }
};
class Current : public Account {
    double overdraft;

public:
    Current(int a, double b, double o) : Account(a, b) {
        overdraft = o;
    }

    void withdraw(double amt) {
        if (amt <= balance + overdraft)
            balance -= amt;
        else
            cout << "Limit exceeded\n";
    }
    void display(){
    cout<<"Account No : " <<accNo<<endl;
    cout<<"Balance : " <<balance<<endl;
    cout<<"Overdraft limit: "<<overdraft<<endl;
    }
};
int main() {
    Savings s(101, 1000, 5);
    Current c(102, 500, 200);

    s.deposit(200);
    cout << "\nSavings Account:\n";
    s.display();

    c.withdraw(600);
    cout << "\nCurrent Account:\n";
    c.display();

    s.addInterest();
    cout<<"\n---After adding interest rate---\n"<<endl;
    cout<<"Interest rate applied"<<s.getRate()<<" %"<<endl;
    cout<<"-----Updated saving account-----\n";
    s.display();

    return 0;
}
