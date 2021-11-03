#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows and columns of square matrix: " << endl;
    cin >> n;

    int a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter the element at " << i << " row and " << j << " column in square matrix: " << endl;
            cin >> a[i][j];
        }
    }

    cout << "The original array is: " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            // My method
            // Swapping using any operator
//             if (i != j)
//             {
//                 a[i][j] = a[i][j] + a[j][i];
//                 a[j][i] = a[i][j] - a[j][i];
//                 a[i][j] = a[i][j] - a[j][i];
//             }
            
            
            // Original Method
            //Swapping Using temp variable

            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;

        }
    }

    cout << "The square matrix obtained after transpose is: " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
