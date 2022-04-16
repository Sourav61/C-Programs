#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the total number of elements in the array: " << endl;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element at " << i << " position of the array: " << endl;
        cin >> a[i];
    }

    const int N = 1e6 + 2;
    bool check[N];

    for (int i = 0; i < N; i++)
    {
        check[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            check[a[i]] = 1;
        }
    }
    int ans = -1;
    for (int i = 1; i < N; i++)
    {
        if (check[i] == false)
        {
            ans = i;
            break;
        }
    }

    cout << "The smallest positive missing number in the given array is: " << ans << endl;
    return 0;
}
