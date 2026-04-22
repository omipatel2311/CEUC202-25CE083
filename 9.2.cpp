#include <iostream>
#include <map>
#include <sstream>
using namespace std;

int main() {
    string str, word;
    map<string, int> m;

    cout << "Enter sentence: ";
    getline(cin, str);

    stringstream ss(str);

    while (ss >> word) {
        m[word]++;  // count frequency
    }

    cout << "\nWord Frequency:\n";
    for (auto x : m) {
        cout << x.first << " = " << x.second << endl;
    }

    return 0;
}
