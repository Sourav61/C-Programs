#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the length of the array: " << endl;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element at the position " << i << " in the array: " << endl;
        cin >> a[i];
    }

    int curr = 2;
    int ans = 2;
    int pd = a[1] - a[0];
    int j = 2;
    while (j < n)
    {

        if (pd == a[j] - a[j - 1])
        {
            curr++;
        }
        else
        {
            pd = a[j] - a[j - 1];
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }

    cout << ans;
}