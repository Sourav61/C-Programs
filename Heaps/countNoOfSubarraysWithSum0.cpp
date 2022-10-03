#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: " << endl;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    map<int, int> cnt;

    int prefSum = 0;

    for (int i = 0; i < n; i++)
    {
        prefSum += a[i];
        cnt[prefSum]++;
    }

    int ans = 0;

    for (auto x : cnt)
    {
        int c = x.second;
        cout << x.first << " " << c << endl;
        ans += (c * (c - 1)) / 2;

        if (x.first == 0)
        {
            ans += x.second;
        }
    }

    cout << ans << endl;
}