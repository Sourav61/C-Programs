#include <bits/stdc++.h>
using namespace std;

// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

void reverseArray(int a[], int l, int n)
{
    if (l >= n / 2)
    {
        return;
    }

    swap(a[l], a[n - l - 1]);
    reverseArray(a, l + 1, n);
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: " << endl;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number at position " << i << " in the array: " << endl;
        cin >> a[i];
    }

    reverseArray(a, 0, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}