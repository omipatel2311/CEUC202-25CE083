#include <iostream>
using namespace std;

class Item {
private:
    int id, quantity;
    string name;
    float price;

public:
    Item(int i, string n, float p, int q) {
        id = i;
        name = n;
        price = p;
        quantity = q;
    }

    void addStock(int q) {
        quantity += q;
    }

    void sell(int q) {
        if (q <= quantity)
            quantity -= q;
        else
            cout << "Insufficient stock\n";
    }

    void display() {
        cout << id << " " << name << " Price: " << price
             << " Qty: " << quantity << endl;
    }
};

int main() {
    Item i1(1, "Pen", 10, 50);

    i1.sell(20);
    i1.addStock(30);
    i1.display();
    return 0;
}
