#include <iostream>
using namespace std;
int main()
{
    char x;
    int a[2][2];
    int b[2][2];
    int c[2][2];
    int i, j;
    do
    {
        cout << "1. create two matrices" << endl;
        cout << "2. display" << endl;
        cout << "3. addition" << endl;
        cout << "4. subtraction" << endl;
        cout << "5. multiplication" << endl;
        cout << "6. transpose" << endl;
        int ch;
        cout << "enter your choice: " << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter matrix 1 elements:" << endl;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    cin >> a[i][j];
                }
            }
            cout << "Enter matrix 2 elements:" << endl;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    cin >> b[i][j];
                }
            }
            break;
        case 2:
            cout << "Matrix 1:" << endl;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    cout << a[i][j] << " ";
                }
                cout << endl;
            }
            cout << endl;

            cout << "Matrix 2:" << endl;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    cout << b[i][j] << " ";
                }
                cout << endl;
            }
            break;
        case 3:
            cout << "Addition of two matrices:" << endl;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    c[i][j] = a[i][j] + b[i][j];
                    cout << c[i][j] << " ";
                }
                cout << endl;
            }
            break;
        case 4:
            cout << "Subtraction of two matrices:" << endl;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    c[i][j] = a[i][j] - b[i][j];
                    cout << c[i][j] << " ";
                }
                cout << endl;
            }
            break;
        case 5:
            cout << "Multiplication of two matrices:" << endl;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    c[i][j] = 0;
                    for (int k = 0; k < 2; k++)
                    {
                        c[i][j] = a[i][k] * b[k][j];
                    }
                    cout << c[i][j] << " ";
                }
                cout << endl;
            }
            break;
        case 6:
            cout << "Transpose of Matrix 1:" << endl;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    cout << a[j][i] << " ";
                }
                cout << endl;
            }
            cout << "Transpose of Matrix 2:" << endl;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    cout << b[j][i] << " ";
                }
                cout << endl;
            }
            break;
        }
        cout << endl;
        cout << "Do you want to continue (y/n)? ";
        cin >> x;
    } while (x == 'y' || x == 'Y');
    return 0;
}
