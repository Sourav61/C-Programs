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
        cout << "Enter the number of element at the position " << i << " in the array: " << endl;
        cin >> a[i];
    }

    // Brute Force Approach

    // int maxSum = INT_MIN;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         int sum = 0;
    //         for (int k = i; k <= j; k++)
    //         {
    //             sum += a[k];
    //         }
    //         maxSum = max(maxSum, sum);
    //     }
    // }

    // cout << "The maximum sum of any subarray in the given array is: " << maxSum << endl;

    // Optimized Approach ==========================================================
}