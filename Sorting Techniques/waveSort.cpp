#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void waveSort(int a[], int n)
{
    for (int i = 1; i < n;)
    {
        if (a[i] > a[i] - 1)
        {
            swap(a[i], a[i - 1]);
        }
        if (a[i] > a[i + 1] && i <= n - 2)
        {
            swap(a[i], a[i + 1]);
        }

        i += 2;
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
        cout << "Enter the number of elements in the array at position " << i << " in the array: " << endl;
        cin >> a[i];
    }

    waveSort(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}