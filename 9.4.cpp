#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    map<string, vector<string>> dir;

    int choice;
    string folder, file;

    do {
        cout << "\n1. Add Folder\n2. Add File\n3. Display\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter folder name: ";
            cin >> folder;
            dir[folder]; // create folder
        }

        else if (choice == 2) {
            cout << "Enter folder name: ";
            cin >> folder;
            cout << "Enter file name: ";
            cin >> file;
            dir[folder].push_back(file);
        }

        else if (choice == 3) {
            for (auto it = dir.begin(); it != dir.end(); it++) {
                cout << "\nFolder: " << it->first << endl;
                for (int i = 0; i < it->second.size(); i++) {
                    cout << "  " << it->second[i] << endl;
                }
            }
        }

    } while (choice != 4);

    return 0;
}
