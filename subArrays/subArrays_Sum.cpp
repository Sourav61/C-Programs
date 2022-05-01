#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the elements of an array: " << endl;
    cin >> n;

    int a[n], curr = 0;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element at " << i << " position of the array: " << endl;
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        curr = 0;
        for (int j = i; j < n; j++)
        {
            curr += a[j];
            cout << "Sum of the current subarray of " << i << " position at " << j << " iteration is: " << curr << endl;
        }
    }

    return 0;
}
