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

    priority_queue<int, vector<int>, greater<int>> minH;

    for (int i = 0; i < n; i++)
    {
        minH.push(a[i]);
    }

    int ans = 0;

    while (minH.size() > 1)
    {
        int e1 = minH.top();
        minH.pop();
        int e2 = minH.top();
        minH.pop();

        ans += e1 + e2;
        minH.push(e1 + e2);
    }

    cout << ans << endl;

    return 0;
}