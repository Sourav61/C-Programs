#include <iostream>
using namespace std;

bool isSorted(int a[], int n)
{

    if (n == 1)
    {
        return true;
    }

    bool restArray = isSorted(a + 1, n - 1);

    return (a[0] < a[1] && restArray);
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: " << endl;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element present at the location " << i << " in the array: " << endl;
        cin >> a[i];
    }

    if (isSorted(a, n))
    {
        cout << "The given array is sorted!!";
    }
    else
    {
        cout << "The given Array is not Sorted!!";
    }

    return 0;
}