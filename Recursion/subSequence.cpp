#include <bits/stdc++.h>
using namespace std;

void printF(int i, vector<int> &v, int a[], int n)
{
    if (i == n)
    {
        for (auto b : v)
        {
            cout << b << " ";
        }
        if (v.size() == 0)
        {
            cout << "{}";
        }
        cout << endl;
        return;
    }

    // If we don't pick element present at particular array index i

    printF(i + 1, v, a, n);

    // When we pick the element present at particular array index i

    v.push_back(a[i]);
    printF(i + 1, v, a, n);
    v.pop_back();
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: " << endl;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the elements in the array at position " << i << " in the array: " << endl;
        cin >> a[i];
    }

    vector<int> v;

    printF(0, v, a, n);
}