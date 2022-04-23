#include <iostream>
using namespace std;

int unique(int a[], int n)
{
    int xorSum = 0;
    for (int i = 0; i < n; i++)
    {
        xorSum = xorSum ^ a[i];
    }
    return xorSum;
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: " << endl;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element at the position " << i << " in the array: " << endl;
        cin >> a[i];
    }

    cout << "The unique element that is not present in pairs in the given array is: " << unique(a, n) << endl;

    return 0;
}