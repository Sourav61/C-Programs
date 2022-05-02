#include <bits/stdc++.h>
using namespace std;

bool myCompare(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
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

    vector<pair<int, int>> v;

    for (int i = 0; i < (sizeof(a) / sizeof(a[0])); i++)
    {
        // pair<int,int> p;
        // p.first = arr[i];
        // p.second = i;
        // v.push_back(p);

        v.push_back(make_pair(a[i], i));
    }

    sort(v.begin(), v.end(), myCompare);

    for (int i = 0; i < v.size(); i++)
    {
        a[v[i].second] = i;
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}