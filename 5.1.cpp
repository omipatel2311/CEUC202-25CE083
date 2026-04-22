#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char str[200];
    cout << "Enter paragraph:\n";
    cin.getline(str, 200);

    char words[50][20];
    int freq[50] = {0};
    int wc = 0;

    char temp[20];
    int k = 0;

    for (int i = 0; i <= strlen(str); i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            temp[k++] = tolower(str[i]); // convert to lowercase
        } else {
            temp[k] = '\0';

            int found = -1;
            for (int j = 0; j < wc; j++) {
                if (strcmp(words[j], temp) == 0) {
                    found = j;
                    break;
                }
            }

            if (found == -1) {
                strcpy(words[wc], temp);
                freq[wc] = 1;
                wc++;
            } else {
                freq[found]++;
            }

            k = 0;
        }
    }

    cout << "\nWord Frequency:\n";
    for (int i = 0; i < wc; i++) {
        cout << words[i] << " = " << freq[i] << endl;
    }

    return 0;
}
