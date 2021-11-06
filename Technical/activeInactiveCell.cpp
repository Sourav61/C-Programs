#include <iostream>
using namespace std;

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

    int b[n];

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            b[i] = 0 ^ arr[i + 1];
        }
        else if (i == n - 1)
        {
            b[i] = arr[i - 1] ^ 0;
        }
        else
        {
            b[i] = arr[i - 1] ^ arr[i + 1];
        }
    }

    // If Both neighbours are active(1)/inactive(0), then resultant cell is Inactive(0)

    // If neighbours are having opposite status then resultant cell is active(1)

    // Assumption === Missing neighbour is always Inactive(0)

    cout << "The resultant array of Active/Inactive cells is: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
}
