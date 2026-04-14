#include <iostream>
using namespace std;

int main()
{
    int *arr = NULL;
    int size = 0, choice;

    do
    {
        cout << "\n1.Insert  2.Delete  3.Display  4.Exit\n";
        cin >> choice;

        if (choice == 1)
        {
            int x;
            cout << "Enter value: ";
            cin >> x;

            int *temp = new int[size + 1];

            for (int i = 0; i < size; i++)
                temp[i] = arr[i];

            temp[size] = x;

            delete[] arr;
            arr = temp;
            size++;
        }

        else if (choice == 2)
        {
            int pos;
            cout << "Enter position: ";
            cin >> pos;

            if (pos < 0 || pos >= size)
            {
                cout << "Invalid!\n";
                continue;
            }

            int *temp = new int[size - 1];

            for (int i = 0, j = 0; i < size; i++)
            {
                if (i != pos)
                    temp[j++] = arr[i];
            }

            delete[] arr;
            arr = temp;
            size--;
        }

        else if (choice == 3)
        {
            for (int i = 0; i < size; i++)
                cout << arr[i] << " ";
            cout << endl;
        }

    }
    while (choice != 4);

    delete[] arr;
    return 0;
}
