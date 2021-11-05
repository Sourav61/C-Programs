#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the length of the character array: " << endl;
    cin >> n;

    char arr[n + 1];
    cout << "Enter the character array: " << endl;
    cin >> arr;

    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // sizeof() operator to check size of the character!
    cout << endl;
    for (int i = 0; i <= n; i++)
    {
        cout << "The size of the character " << arr[i] << " in the character array " << arr << " is: "
             << " ";
        cout << sizeof(arr[i]) << endl;
    }
    cout << endl;

    // print the ASCII value of the character at a specific position!

    for (int i = 0; i < n; i++)
    {
        cout << "The ASCII value of the character " << arr[i] << " in the character array " << arr << " is: "
             << " ";
        cout << int(arr[i]) << endl;
    }

    return 0;
}
