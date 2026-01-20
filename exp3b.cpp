#include <iostream>
using namespace std;
int main()
{
    int data, n;
    cout << "Enter size of an array:";
    cin >> n;
     int arr[n], i, low, mid, upper;
    bool found = false;
    cout << "Enter elements:";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter data you want to search:";
    cin >> data;
    low=0;
    upper=n-1;
    while(low<=upper)
    {
        mid=(low+upper)/2;
        if(arr[mid]==data)
        {
            cout<<"Element '"<<data<<"' found at index no. '"<<mid<<"'!"<<endl;
            found=true;
            break;
        }
        else if(arr[mid]<data)
        {
            low=mid+1;
        }
        else{
            upper=mid-1;
        }
    }
    if(!found)
    {
        cout<<"No such element in an array!"<<endl;
    }
    cout<<endl;
    return 0;
}