#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int a = 0, b = n;

    while (a <= b)
    {
        int mid = (a + b) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            b = mid - 1;
        }
        else
        {
            a = mid + 1;
        }
    }

    return -1;

    // for(int i=0;i<=mid;i++)
}

int main()
{
    int n, key;
    cout << "Enter the number of elements in the array: " << endl;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element at " << i << " position of the array: " << endl;
        cin >> arr[i];
    }

    cout << "Enter the element that you are looking for in the array: " << endl;
    cin >> key;

    if (binarySearch(arr, n, key) > 0)
    {
        cout << "The entered element " << key << " was found at " << binarySearch(arr, n, key) << " position in the array " << endl;
    }
    else
    {
        cout << "Sorry!, The entered element " << key << " could not be found in the array " << endl;
    }
}
