#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter the number of rows of 1st matrix: " << endl;
    cin >> x;

    int y;
    cout << "Enter the number of rows of 1st and columns of 2nd matrix: " << endl;
    cin >> y;

    int z;
    cout << "Enter the number of columns of 2nd matrix: " << endl;
    cin >> z;

    int a[x][y], b[y][z];

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << "Enter the element of the 1st matrix at " << i << " row and " << j << " column: " << endl;
            cin >> a[i][j];
        }
    }

    cout << "\nThe 1st matrix is: " << endl;

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < z; j++)
        {
            cout << "Enter the element of 2nd matrix at " << i << " row and " << j << " column: " << endl;
            cin >> b[i][j];
        }
    }

    cout << "\nThe 2nd matrix is: " << endl;

    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < z; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    int ans[x][z];

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < z; j++)
        {
            ans[i][j] = 0;
        }
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < z; j++)
        {
            for (int k = 0; k < y; k++)
            {
                ans[i][j] += a[i][k] * b[k][j];

                // cout << i << " i " << j << " j " << k << " k  ";
            }
            // cout << endl;
        }
    }

    cout << "\nThe final array obtained after Matrix Multiplication is: " << endl;

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < z; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
