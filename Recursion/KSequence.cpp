#include <bits/stdc++.h>
using namespace std;

// void SubsequenceK(int ind, vector<int> &ds, int s, int sum, int a[], int n)
// {
//     if (ind == n)
//     {
//         if (s == sum)
//         {
//             cout << "The subsequence with the given sum " << sum << " is :" << endl;
//             for (auto ind : ds)
//             {
//                 cout << ind << " ";
//             }
//             cout << endl;
//         }
//         return;
//     }

//     ds.push_back(a[ind]);
//     s += a[ind];

//     SubsequenceK(ind + 1, ds, s, sum, a, n);

//     s -= a[ind];
//     ds.pop_back();

//     SubsequenceK(ind + 1, ds, s, sum, a, n);
// }

// If we have to print only one subsequence

bool SubsequenceK(int ind, vector<int> &ds, int s, int sum, int a[], int n)
{
    if (ind == n)
    {
        if (s == sum)
        {
            cout << "The subsequence with the given sum " << sum << " is :" << endl;
            for (auto ind : ds)
            {
                cout << ind << " ";
            }
            cout << endl;
            return true;
        }
        return false;
    }

    ds.push_back(a[ind]);
    s += a[ind];

    if (SubsequenceK(ind + 1, ds, s, sum, a, n) == true)
    {
        return true;
    }

    s -= a[ind];
    ds.pop_back();

    if (SubsequenceK(ind + 1, ds, s, sum, a, n))
    {
        return true;
    }

    return false;
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

    vector<int> ds;

    SubsequenceK(0, ds, 0, k, a, n);

    return 0;
}