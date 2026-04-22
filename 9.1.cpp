#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    // Reverse using library
    reverse(v.begin(), v.end());

    cout << "Reversed (std::reverse): ";
    for (int x : v)
        cout << x << " ";

    cout << endl;

    // Manual reverse (again to original)
    for (int i = 0; i < v.size() / 2; i++) {
        swap(v[i], v[v.size() - i - 1]);
    }

    cout << "Manual Reverse: ";
    for (int x : v)
        cout << x << " ";

    return 0;
}
