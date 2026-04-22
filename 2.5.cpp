#include <iostream>
#include <cmath>
using namespace std;

class Loan {
private:
    int loanID;
    string name;
    double amount;
    double annualRate;
    int months;

public:
    // Default constructor
    Loan() {
        loanID = 0;
        name = "Unknown";
        amount = 0;
        annualRate = 0;
        months = 0;
    }

    // Parameterized constructor
    Loan(int id, string n, double amt, double rate, int m) {
        loanID = id;
        name = n;
        amount = amt;
        annualRate = rate;
        months = m;
    }

    // EMI calculation
    double calculateEMI() {
        double R = (annualRate / 12) / 100; // monthly interest
        double EMI = (amount * R * pow(1 + R, months)) / (pow(1 + R, months) - 1);
        return EMI;
    }

    // Display details
    void display() {
        cout << "Loan ID: " << loanID << endl;
        cout << "Name: " << name << endl;
        cout << "Amount: " << amount << endl;
        cout << "Rate: " << annualRate << "%" << endl;
        cout << "Months: " << months << endl;
        cout << "EMI: " << calculateEMI() << endl;
    }
};

int main() {
    Loan l1(101, "John", 100000, 10, 12);
    l1.display();

    return 0;
}
