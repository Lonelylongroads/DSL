#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printArray(const vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void bubbleSort(vector<int> arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
        cout << "Pass " << i + 1 << ": ";
        printArray(arr, n);
    }
}

void insertionSort(vector<int> arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        cout << "Pass " << i << ": ";
        printArray(arr, n);
    }
}

void selectionSort(vector<int> arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        swap(arr[min_idx], arr[i]);
        cout << "Pass " << i + 1 << ": ";
        printArray(arr, n);
    }
}

int partition(vector<int> &arr, int low, int high, int &pass)
{
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    cout << "Partition (Pass " << ++pass << ") around pivot " << pivot << ": ";
    printArray(arr, arr.size());
    return (i + 1);
}

void quickSort(vector<int> &arr, int low, int high, int &pass)
{
    if (low < high)
    {
        int pi = partition(arr, low, high, pass);
        quickSort(arr, low, pi - 1, pass);
        quickSort(arr, pi + 1, high, pass);
    }
}

int main()
{
    int n, choice;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    do
    {
        cout << "\n--- Sorting Menu ---\n";
        cout << "1. Bubble Sort\n2. Insertion Sort\n3. Selection Sort\n4. Quick Sort\n5. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        int passCount = 0;
        switch (choice)
        {
        case 1:
            bubbleSort(arr, n);
            break;
        case 2:
            insertionSort(arr, n);
            break;
        case 3:
            selectionSort(arr, n);
            break;
        case 4:
        {
            vector<int> temp = arr;
            quickSort(temp, 0, n - 1, passCount);
            break;
        }
        case 5:
            cout << "Exiting...";
            break;
        default:
            cout << "Invalid choice!";
        }
    } while (choice != 5);

    return 0;
}