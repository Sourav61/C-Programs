#include <iostream>
using namespace std;

int main()
{
    int n, extra, maxNo;
    cout << "Enter the number of kids: " << endl;
    cin >> n;
    cout << "Enter the extra amount of candies: " << endl;
    cin >> extra;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element at " << i << " position of the array" << endl;
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        maxNo = max(arr[i], maxNo);
    }

    for (int i = 0; i < n; i++)
    {
        if ((arr[i] + extra) >= maxNo)
        {
            cout << "true ";
        }
        else
        {
            cout << "false ";
        }
    }
}
