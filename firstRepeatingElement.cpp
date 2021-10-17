#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in the array: " << endl;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element at " << i << " position of the array: " << endl;
        cin >> a[i];
    }

    const int N = 1e2 + 2;

    int idx[N];

    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }

    int minidx = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (idx[a[i]] != -1)
        {
            minidx = min(minidx, idx[a[i]]);
        }
        else
        {
            idx[a[i]] = i;
        }
    }

    if (minidx == INT_MAX)
    {
        cout << "Sorry! There is no repeating element found in the whole array!!" << endl;
    }
    else
    {
        cout << "The first repeating element " << a[minidx] << " is found in the array at " << minidx + 1 << " position!" << endl;
    }

    return 0;
}
