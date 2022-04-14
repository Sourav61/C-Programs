#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the length of the array: " << endl;
    cin >> n;

    // My approach

    // int a[n], l[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cout << "Enter the element at the position " << i << " in the array: " << endl;
    //     cin >> a[i];
    //     l[i] = 0;
    // }

    // int mx = a[0];
    // if (a[0] > a[1])
    // {
    //     l[0] = a[0];
    // }
    // for (int i = 1; i < n; i++)
    // {
    //     mx = max(mx, a[i - 1]);
    //     if (a[i] > mx && a[i] > a[i + 1])
    //     {
    //         l[i] = a[i];
    //     }
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     if (l[i] != 0)
    //     {
    //         cout << l[i] << " ";
    //     }
    // }

    // =============================================================================

    // Optimized Approach

    if (n == 1)
    {
        cout << "1" << endl;
        return 0;
    }

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element at the position " << i << " in the array: " << endl;
        cin >> a[i];
    }

    int mx = -1;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > mx && a[i] > a[i + 1])
        {
            ans++;
        }
        mx = max(mx, a[i]);
    }

    cout << "The total no. of record breaking days in the given array are: " << ans << endl;
}