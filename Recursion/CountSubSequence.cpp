#include <iostream>
using namespace std;

int countSubSequence(int ind, int s, int sum, int a[], int n)
{
    if (ind == n)
    {
        if (s == sum)
        {
            return 1;
        }
        else
            return 0;
    }

    s += a[ind];

    int l = countSubSequence(ind + 1, s, sum, a, n);

    s -= a[ind];

    int r = countSubSequence(ind + 1, s, sum, a, n);

    return l + r;
}

int main()
{
    int n, k;
    cout << "Enter the number of elements in the array: " << endl;
    cin >> n;

    cout << "Enter the sum for which you want to find suitable subsequence: " << endl;
    cin >> k;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element at the position " << i << " in the array: " << endl;
        cin >> a[i];
    }

    cout << "The total number of subsequences in the given array with sum as " << k << " is: " << countSubSequence(0, 0, k, a, n);

    return 0;
}