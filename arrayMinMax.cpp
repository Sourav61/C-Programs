#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements of array: " << endl;
    cin >> n;
    int arr[n], max, min;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element of the array at " << i << " position: " << endl;
        cin >> arr[i];
    }

    max = min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[0] < arr[i])
        {
            max = arr[i];
        }
        else
        {
            min = arr[i];
        }
    }

    cout << "The maximum element present in array is :" << max << endl;
    cout << "The minimun element present in array is :" << min << endl;
}
