#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file;
    int num, sum = 0;

    file.open("data.txt"); // file name

    if (!file) {
        cout << "File not found!" << endl;
        return 0;
    }

    while (file >> num) {  // read numbers line by line
        sum += num;
    }

    if (file.fail() && !file.eof()) {
        cout << "Invalid data found!" << endl;
    }

    cout << "Sum = " << sum << endl;

    file.close();
    return 0;
}
