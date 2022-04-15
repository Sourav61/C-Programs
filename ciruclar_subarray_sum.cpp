#include <iostream>
using namespace std;

int kadane(int arr[], int n)
{
    int currentSum = 0, maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        if (currentSum < 0)
        {
            currentSum = 0;
        }
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
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

    int wrapSum, nonWrapSum, totalSum = 0;

    nonWrapSum = kadane(a, n);

    for (int i = 0; i < n; i++)
    {
        totalSum += a[i];
        a[i] = -a[i];
    }

    wrapSum = totalSum + kadane(a, n);

    cout << "The maximum sum out of all circular subarrays in the given array is: " << max(wrapSum, nonWrapSum) << endl;
}