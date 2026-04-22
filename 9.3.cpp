#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;

    int n, x;
    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        s.insert(x);  // duplicates removed automatically
    }

    cout << "Unique elements:\n";
    for (int val : s) {
        cout << val << " ";
    }

    return 0;
}
