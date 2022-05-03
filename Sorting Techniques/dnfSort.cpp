#include <bits/stdc++.h>
using namespace std;

void swap(int a[], int i, int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void dnfSort(int a[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (a[mid] == 0)
        {
            swap(a, low, mid);
            mid++;
            low--;
        }
        else if (a[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(a, mid, high);
            high--;
        }
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: " << endl;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element(0 or 1 or 2) at the position " << i << " in the array: " << endl;
        cin >> a[i];
    }

    dnfSort(a, n);

    cout << "The array obtained after applying dnf sort is: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}