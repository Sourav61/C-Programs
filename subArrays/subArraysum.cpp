#include <iostream>
using namespace std;

int main()
{
    int n, s;
    cout << "Enter the number of elements in the array: " << endl;
    cin >> n;

    cout << "Enter the given sum: " << endl;
    cin >> s;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element at position " << i << " of the array: " << endl;
        cin >> a[i];
    }

    // Brute Force Approach

    // for (int i = 0; i < n; i++)
    // {
    //     int sum = a[i];
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         sum += a[j];
    //         if (sum == s)
    //             cout << "The subarray with the given sum was found in between " << i << " and " << j << endl;
    //     }
    // }

    // Optimised Approach =============================================================================================

    int i = 0, j = 0, st = -1, en = -1, sum = 0;

    while (j < n && sum + a[j] <= s)
    {
        sum += a[j];
        j++;
    }

    if (sum == s)
    {
        cout << i + 1 << " " << j << endl;
        return 0;
    }

    while (j < n)
    {
        sum += a[j];
        while (sum > s)
        {
            sum -= a[i];
            i++;
        }

        if (sum == s)
        {
            st = i + 1;
            en = j + 1;
            break;
        }
        j++;
    }

    cout << st << " " << en << endl;

    return 0;
}
