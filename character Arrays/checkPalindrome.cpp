#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the length of the character array: " << endl;
    cin >> n;

    char a[n + 1];
    cout << "Please enter a character array of length " << n << endl;
    cin >> a;

    bool check = 1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[n - 1 - i])
        {
            check = 0;
            break;
        }
    }

    if (check == true)
    {
        cout << "The character array " << a << " is a palindrome." << endl;
    }
    else
    {
        cout << "The character array " << a << " is not a palindrome." << endl;
    }

    return 0;
}
