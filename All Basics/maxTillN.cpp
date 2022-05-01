#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in the array: " << endl;
    cin >> n;

    int mx = -99, a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element at " << i << " position of the array: " << endl;
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        mx = max(mx, a[i]);
        cout << "The maximum element value until " << i << " iteration is: " << mx << endl;
    }

    return 0;
}
