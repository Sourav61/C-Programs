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
    int arr[7] = {5, 17, 6, 4, 8, 2, 1};

    int l[7];
    int x = arr[6];

    for (int i = 6; i >= 0; i--)
    {
        if (i == 6)
        {
            l[0] = arr[6];
        }
        else
        {
            if (arr[i] >= max(arr[i], x))
            {
                // cout << x << endl;
                l[6 - i] = arr[i];
                x = max(arr[i], arr[i + 1]);
            }
            else
            {
                l[6 - i] = 0;
            }
        }
    }

    for (int i = 0; i < 7; i++)
    {
        if (l[i] != 0)
        {
            cout << l[i] << "  ";
        }
    }

    return 0;
}
