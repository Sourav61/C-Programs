#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int n, key;
    cout << "Enter the number of elements in an array: " << endl;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element at " << i << " position of the array: " << endl;
        cin >> arr[i];
    }

    cout << "Enter the element that you want to search out for: " << endl;
    cin >> key;

    if (linearSearch(arr, n, key) > 0)
    {
        cout << "The element " << key << " was found at " << linearSearch(arr, n, key) << " position in the array" << endl;
    }
    else
    {
        cout << "Sorry!, The entered element " << key << " was not found in the array" << endl;
    }
}
