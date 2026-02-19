#include <iostream>
using namespace std;

class Book {
public:
    int id, copies;
    string title, author;

    Book(int i, string t, string a, int c) {
        id = i;
        title = t;
        author = a;
        copies = c;
    }

    void issueBook() {
        if (copies > 0)
            copies--;
        else
            cout << "Book not available\n";
    }

    void returnBook() {
        copies++;
    }

    void display() {
        cout << id << " " << title << " " << author << " Copies: " << copies << endl;
    }
};

int main() {
    Book b1(1, "C++", "Bjarne", 3);

    b1.issueBook();
    b1.returnBook();
    b1.display();
    return 0;
}
