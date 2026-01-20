#include <iostream>
using namespace std;
int main()
{
    int data, n;
    cout << "Enter size of an array:";
    cin >> n;
     int arr[n], i;
    bool found = false;
    cout << "Enter elements:";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter data you want to search:";
    cin >> data;
    i = 0;
    while (i < n)
    {
        if (arr[i] == data)
        {
            cout << "Element '" << data << "' found at index no. '" << i << "'!" << endl;
            found = true;
            break;
        }
        i++;
    }
    if (!found)
    {
        cout << "No such element in an array!" << endl;
    }
    cout << endl;
    return 0;
}