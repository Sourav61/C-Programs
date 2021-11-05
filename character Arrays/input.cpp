#include <iostream>
using namespace std;

int main()
{
    char arr[100];
    cout << "Enter the character array: " << endl;
    cin >> arr;

    cout << arr[1] << endl;

    // sizeof() operator to check size of the character!

    cout << sizeof(arr[1]) << endl;

    return 0;
}
