// Only applicable to positive numbers
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the total number of elements in an array: " << endl;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element at " << i << " position of the array: " << endl;
        cin >> a[i];
    }

    int count = 1;

    while (count < n)
    {
        for (int i = 0; i < n - count; i++)
        {
            if (a[i] > a[i + 1])
            {
                int temp = a[i + 1];
                a[i + 1] = a[i];
                a[i] = temp;
            }
        }
        count++;
    }

    for (int i = 0; i < n; i++)
    {

        // cout << i << " ";
        if (a[i] != i)
        {
            cout << i << " is the smallest positive number missing in the above array! " << endl;
            break;
        }
    }

    return 0;
}
