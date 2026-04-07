#include <iostream>
using namespace std;

template <typename T>
void display(T arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

template <typename T>
T findMax(T arr[], int n) {
    T max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

template <typename T>
void reverseArray(T arr[], int n) {
    for(int i = 0; i < n/2; i++) {
        T temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}

template <typename T>
void findLeaders(T arr[], int n) {
    cout << "Leader elements: ";

    for(int i = 0; i < n; i++) {
        bool isLeader = true;
        for(int j = i+1; j < n; j++) {
            if(arr[i] <= arr[j]) {
                isLeader = false;
                break;
            }
        }
        if(isLeader) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {

    int arr1[] = {16, 17, 4, 3, 5, 2};
    int n1 = 6;

    cout << "Integer Array:\n";
    display(arr1, n1);

    cout << "Maximum: " << findMax(arr1, n1) << endl;

    reverseArray(arr1, n1);
    cout << "Reversed: ";
    display(arr1, n1);

    findLeaders(arr1, n1);


    float arr2[] = {1.5, 3.2, 2.8, 4.1};
    int n2 = 4;

    cout << "\nFloat Array:\n";
    display(arr2, n2);
    cout << "Maximum: " << findMax(arr2, n2) << endl;
    findLeaders(arr2, n2);


    char arr3[] = {'a', 'z', 'b', 'y'};
    int n3 = 4;

    cout << "\nCharacter Array:\n";
    display(arr3, n3);
    cout << "Maximum: " << findMax(arr3, n3) << endl;
    findLeaders(arr3, n3);

    return 0;
}
