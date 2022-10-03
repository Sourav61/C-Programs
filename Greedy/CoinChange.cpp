#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter the number of elements in the array" << endl;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int x;
    cout << "Enter the required amount" << endl;
    cin >> x;

    sort(a.begin(), a.end(), greater<int>());
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans += x / a[i];
        x -= (x / a[i]) * a[i];
    }

    cout << ans << endl;

    return 0;
}