#include <bits/stdc++.h>
using namespace std;

void countSort(int a[], int n)
{
    int k = a[0];
    for (int i = 0; i < n; i++)
    {
        k = max(k, a[i]);
    }

    int count[k + 1] = {0};

    for (int i = 0; i < n; i++)
    {
        count[a[i]]++;
    }

    for (int i = 1; i <= k; i++)
    {
        count[i] += count[i - 1];
    }

    int res[n];
    for (int i = n - 1; i >= 0; i--)
    {
        res[--count[a[i]]] = a[i];
    }

    for (int i = 0; i < n; i++)
    {
        a[i] = res[i];
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
        cout << "Enter the element at the position " << i << " in the array: " << endl;
        cin >> a[i];
    }

    countSort(a, n);

    cout << "The array after using count sort is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}