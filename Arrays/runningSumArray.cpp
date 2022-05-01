#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the elements of the array: " << endl;
    cin >> n;

    int arr[n], sum = 0;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element of the array at " << i << " position: " << endl;
        cin >> arr[i];
    }

    cout << "The final array obtained is: " << endl;

    for (int i = 0; i < n; i++)
    {

        sum += arr[i];
        cout << sum << " ";
    }
}
