#include <iostream>
using namespace std;
int main()
{
    char x;
    int arr[4], i, a[4], b[4];
    do
    {
        /* code */ cout << "1. create" << endl;
        cout << "2. display" << endl;
        cout << "3. addition" << endl;
        cout << "4. subtraction" << endl;
        int ch;
        cout << "enter your choice: " << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter elements for array 1:" << endl;
            for (i = 0; i < 4; i++)
            {
                cin >> arr[i];
            }
            cout << endl;

            cout << "enter elements for array 2:" << endl;
            for (i = 0; i < 4; i++)
            {
                cin >> a[i];
            }
            cout << endl;
            break;
        case 2:
            cout << "Array 1:" << endl;
            for (i = 0; i < 4; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;

            cout << "Array 2:" << endl;
            for (i = 0; i < 4; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
            break;
        case 3:
            cout << "Addition of two arrays:" << endl;
            for (i = 0; i < 4; i++)
            {
                b[i] = arr[i] + a[i];
                cout << b[i] << " ";
            }
            cout << endl;
            break;
        case 4:
            cout << "Subtraction of two arrays:" << endl;
            for (i = 0; i < 4; i++)
            {
                b[i] = arr[i] - a[i];
                cout << b[i] << " ";
            }
            cout << endl;
            break;
        }
        cout << endl;
        cout << "Do you want to continue?";
        cin >> x;
    } while (x == 'y' || x == 'Y');
    return 0;
}
