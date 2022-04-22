#include <iostream>
using namespace std;

void subsets(int arr[], int n)
{
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the length of the array: " << endl;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element at the position " << i << " of array: " << endl;
        cin >> a[i];
    }

    cout << "The subsets of the given array are as follows: " << endl;
    subsets(a, n);
}