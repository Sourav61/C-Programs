#include <iostream>
using namespace std;

int firstOccur(int a[], int n, int x, int i)
{
    if (i == n)
    {
        return -1;
    }

    if (a[i] == x)
    {
        return i;
    }

    return firstOccur(a, n, x, i + 1);
}

int lastOccur(int a[], int n, int x, int i)
{
    if (i == n)
    {
        return -1;
    }

    int restArray = lastOccur(a, n, x, i + 1);

    if (restArray != -1)
    {
        return restArray;
    }

    if (a[i] == x)
    {
        return i;
    }

    return -1;
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

    int x;
    cout << "Enter the number that you want to search for in the array: " << endl;
    cin >> x;

    cout << "The number " << x << " makes it's first appearance at location ";

    cout << firstOccur(a, n, x, 0) << " in the array.";

    cout << "The number " << x << " makes it's last appearance at location ";

    cout << lastOccur(a, n, x, 0) << " in the array.";

    return 0;
}