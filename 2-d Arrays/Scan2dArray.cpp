#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows of the 2-d array: " << endl;
    cin >> n;

    int m;
    cout << "Enter the number of columns of the array: " << endl;
    cin >> m;

    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Enter the element at the " << i << " row and " << j << " column in the 2-d array: " << endl;
            cin >> a[i][j];
        }
    }

    int x;
    cout << "Enter the element that you want to search in the 2-d array: " << endl;
    cin >> x;

    cout << "The 2-d array is: " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == x)
            {
                cout << "The element " << x << " was found at the " << i << " row and " << j << " column in the 2-d array " << endl;
                return 0;
            }
        }
    }
    cout << "Sorry!, The element " << x << " was not found in the 2-d array." << endl;
    return 0;
}
