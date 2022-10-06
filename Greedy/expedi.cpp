#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<pair<int, int>> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first >> a[i].second;
        }

        int l, p;
        cin >> l >> p;

        for (int i = 0; i < n; i++)
        {
            a[i].first = l - a[i].first;
        }

        sort(a.begin(), a.end());
        int curr = p;

        priority_queue<int, vector<int>> maxH;

        bool flag = 0;

        for (int i = 0; i < n; i++)
        {
            if (curr >= l)
                break;

            while (curr < a[i].first)
            {
                if (maxH.empty())
                {
                    flag = 1;
                    break;
                }

                ans++;
                cur += maxH.top();
                maxH.pop();
            }

            if (flag)
                break;

            maxH.push(a[i].second);
        }

        if (flag == 1)
        {
            cout << "-1" << endl;
            continue;
        }

        while (!maxH.empty() && curr < l)
        {
            curr += maxH.top();
            pq.pop();
            ans++;
        }

        if (curr < l)
        {
            cout << "-1" << endl;
            continue;
        }

        cout << ans << endl;
    }

    return 0;
}