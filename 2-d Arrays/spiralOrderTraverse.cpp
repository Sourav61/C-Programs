#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows in the 2-d array: " << endl;
    cin >> n;

    int m;
    cout << "Enter the number of columns in the 2-d array: " << endl;
    cin >> m;

    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Enter the element at " << i << " row and " << j << " column in 2-d array: " << endl;
            cin >> a[i][j];
        }
    }

    cout << "The 2-d array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    int row_start = 0, row_end = n - 1, column_start = 0, column_end = m - 1;

    while (row_start <= row_end && column_start <= column_end)
    {
        // for column_start to column_end
        for (int col = column_start; col <= column_end; col++)
        {
            cout << a[row_start][col] << " ";
        }
        cout << endl;
        row_start++;

        // for row_start to row_end
        for (int col = row_start; col <= row_end; col++)
        {
            cout << a[col][column_end] << " ";
        }
        cout << endl;
        column_end--;

        // for column_end to column_start
        for (int col = column_end; col >= column_start; col--)
        {
            cout << a[row_end][col] << " ";
        }
        cout << endl;
        row_end--;

        // for row_end to row_start
        for (int col = row_end; col >= row_start; col--)
        {
            cout << a[col][column_start] << " ";
        }
        cout << endl;
        column_start++;
    }
}
