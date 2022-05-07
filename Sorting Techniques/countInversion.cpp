#include <iostream>
using namespace std;

long long merge(int arr[], int l, int mid, int r)
{
    long long inv = 0;
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int a[n1];
    int b[n2];

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }

    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + i + 1];
    }

    int i = 0, j = 0, k = l;

    while (i < n1 and j < n2)
    {
        if (a[i] <= b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            // a[i] > b[j] and i<j
            // Here if a[i] > b[j], then all elements after a[i] till i<n1 will always be greater than b[j]
            // Thus total number of inversions will be n-i;
            inv += n1 - i;
            k++;
            j++;
        }
    }

    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }

    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }

    return inv;
}

long long mergeSort(int a[], int l, int r)
{
    long long inv = 0;
    if (l < r)
    {
        int mid = (l + r) / 2;
        inv += mergeSort(a, l, mid);
        inv += mergeSort(a, mid + 1, r);

        inv += merge(a, l, mid, r);
    }

    return inv;
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

    cout << "The total number of inversions present in the given array are: " << mergeSort(a, 0, n - 1) << endl;

    return 0;
}