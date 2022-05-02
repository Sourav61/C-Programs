// https://youtu.be/X0G5jEcvroo

#include <bits/stdc++.h>
using namespace std;

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

    // Brute Force

    // int max = 0, max_num = -1;

    // for (int i = 0; i < n; i++)
    // {
    //     int count = 0;
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (a[i] == a[j])
    //         {
    //             count++;
    //         }

    //         if (max < count)
    //         {
    //             max = count;
    //             max_num = a[i];
    //         }
    //         else if (max == count)
    //         {
    //             max = min(max, a[i]);
    //         }
    //     }
    // }

    // // cout << max << max_num;

    // if (max > n / 2)
    // {
    //     cout << max;
    //     return 0;
    // }

    // if (max >= 0)
    // {
    //     cout << -1 << endl;
    //     return 0;
    // }
    // return 0;

    // Using moore's algo

    if (n == 0)
    {
        return a[0];
    }

    int count = 0;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        if (ans = a[i])
        {
            count++;
        }
        else
        {
            count--;
        }

        if (count = 0)
        {
            ans = a[i];
            count = 1;
        }
    }

    count = 0;

    for (int i = 0; i < n; i++)
    {
        if (ans == a[i])
        {
            count++;
        }
    }

    if (count > n / 2)
    {
        cout << "The majority element in the given array is: " << ans << endl;
        return 0;
    }

    cout << "The majority element was not found in the given array!" << endl;

    return 0;
}