#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in array " << endl;
    cin >> n;
    int arr[n];

    for (int i = 1; i <= n; i++)
    {
        cout << "Enter the element of the array at " << i << " position: " << endl;
        cin >> arr[i];
    }

    cout << "The array obtained is: " << endl;

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
}
