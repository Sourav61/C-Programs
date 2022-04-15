#include <iostream>
using namespace std;

bool boolSum(int arr[], int n, int k)
{
    // Brute Force Approach

    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] + arr[j] == k)
    //         {
    // cout << "The elements with the given sum " << k << " are found at "<< i << " and " << j << " postion in the array. " << endl;
    //             return true;
    //         }
    //     }
    // }
    // return false;

    // ===============================================================================

    // Optimized Approach

    int low = 0, high = n - 1;

    while (low < high)
    {
        if (arr[low] + arr[high] == k)
        {
            cout << "The elements with the given sum " << k << " are found at " << low << " and " << high << " postion in the array. " << endl;
            return true;
        }
        else if (arr[low] + arr[high] < k)
        {
            low++;
        }
        else
        {
            high--;
        }
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: " << endl;
    cin >> n;

    int k;
    cout << "Enter the sum for which you want to find suitable subarray: " << endl;
    cin >> k;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element at the position " << i << " in the array: " << endl;
        cin >> a[i];
    }

    boolSum(a, n, k);

    return 0;
}