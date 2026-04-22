#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("data.txt"); // file name

    if (!file) {
        cout << "Error: File not found!" << endl;
        return 0;
    }

    char ch;
    int chars = 0, words = 0, lines = 0;

    while (file.get(ch)) {
        chars++;

        // Count words (space or newline)
        if (ch == ' ' || ch == '\n') {
            words++;
        }

        // Count lines
        if (ch == '\n') {
            lines++;
        }
    }

    // Adjust word count (last word)
    if (chars > 0) words++;

    cout << "Characters: " << chars << endl;
    cout << "Words: " << words << endl;
    cout << "Lines: " << lines << endl;

    file.close();
    return 0;
}
