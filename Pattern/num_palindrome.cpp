#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows in the pattern: " << endl;
    cin >> n;

    // Method-1(Self)

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = n - 1; j > i; j--)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = n - i; j < n; j++)
    //     {
    //         cout << n - j + 1 << " ";
    //     }
    //     for (int j = n; j >= n - i; j--)
    //     {
    //         cout << n - j + 1 << " ";
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i <= n; i++)
    {
        int j;
        for (j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        int k = i;
        for (; j <= n; j++)
        {
            cout << k-- << " ";
        }
        k = 2;
        for (; j <= n + i - 1; j++)
        {
            cout << k++ << " ";
        }
        cout << endl;
    }

    return 0;
}