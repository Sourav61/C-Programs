#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements of array: " << endl;
    cin >> n;
    int arr[n], maxNo, minNo;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element of the array at " << i << " position: " << endl;
        cin >> arr[i];
    }

    // Basic Approach

    // maxNo = minNo = arr[0];

    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[0] < arr[i])
    //     {
    //         maxNo = arr[i];
    //     }
    //     else
    //     {
    //         minNo = arr[i];
    //     }
    // }

    // Approach 2

    // maxNo = minNo = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        maxNo = max(maxNo, arr[i]);
        minNo = min(minNo, arr[i]);
    }

    cout << "The maximum element present in array is :" << maxNo << endl;
    cout << "The minimun element present in array is :" << minNo << endl;
}
