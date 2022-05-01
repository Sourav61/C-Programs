#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements present inside the array: " << endl;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element at " << i << " position of the array: " << endl;
        cin >> arr[i];
    }

    int count = 1;
    while (count < n)
    {
        for (int i = 0; i < n - count; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        count++;
    }

    cout << "The final array obtained after sorting using bubble sort technique is: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
