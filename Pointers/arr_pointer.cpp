#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the length of the array: " << endl;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element at " << i << " position of the array: " << endl;
        cin >> arr[i];
    }

    cout << "The array is: " << endl;

    // cout << *arr << endl;

    int *ptr = arr;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << *ptr << endl;
    //     ptr++;
    // }

    for (int i = 0; i < n; i++)
    {
        cout << *(arr + i) << endl;
    }
}
