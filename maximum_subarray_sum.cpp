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

    // My Approach

    // int i = 0, j = 0, sum = 0;

    // int maxSum = INT_MIN;

    // for (int i = 0; i < n; i++)
    // {
    //     int sum = 0;
    //     for (int j = i; j < n; j++)
    //     {
    //         sum += a[j];
    //         maxSum = max(maxSum, sum);
    //     }
    // }

    // cout << "The maximum sum out of all subarrays in the given array is: " << maxSum << endl;

    // Approach in Lecture 8.6 ========================================================================================

    int currSum[n + 1];
    currSum[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        currSum[i] = currSum[i - 1] + a[i - 1];
    }

    for (int i = 1; i <= n; i++)
    {
        cout << currSum[i] << " ";
    }
    cout << endl;

    int maxSum = INT_MIN;

    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum = currSum[i] - currSum[j];
            maxSum = max(sum, maxSum);
        }
    }

    cout << maxSum << endl;
}