#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the number of rows in the 2-d Array: " << endl;
    cin >> n;

    cout << "Enter the number of column in the 2-d Array: " << endl;
    cin >> m;

    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Enter the element at " << i << " row and " << j << " column: " << endl;
            cin >> a[i][j];
        }
    }

    int x;
    cout << "Enter the value of element that you want to search in the 2-d array: " << endl;
    cin >> x;

    int r = 0, c = m - 1;

    bool found = false;

    while (r < n && c >= 0)
    {
        if (a[r][c] == x)
        {
            found = true;
        }
        if (a[r][c] > x)
        {
            c--;
        }
        else
        {
            r++;
        }
    }

    if (found)
    {
        cout << "The element " << x << " was found." << endl;
    }
    else
    {
        cout << "The element " << x << " does not exist in the 2-d array!" << endl;
    }
}
