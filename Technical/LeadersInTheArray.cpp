#include <iostream>
using namespace std;

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int n;
    cout << "Enter the length of the array: " << endl;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element at " << i << " position of the array: " << endl;
        cin >> arr[i];
    }

    int l[n];
    int x = arr[n - 1];

    for (int i = n - 1; i >= 0; i--)
    {
        if (i == n - 1)
        {
            l[0] = arr[n - 1];
        }
        else
        {
            if (arr[i] >= max(arr[i], x))
            {
                // cout << x << endl;
                l[n - 1 - i] = arr[i];
                x = max(arr[i], arr[i + 1]);
            }
            else
            {
                l[n - 1 - i] = 0;
            }
        }
    }

    // Leaders are the elements who are greater than all elements present on it's right side

    cout << "The Leaders of the array are: " << endl;

    for (int i = 0; i < n - 1; i++)
    {
        if (l[i] != 0)
        {
            cout << l[i] << "  ";
        }
    }

    return 0;
}
