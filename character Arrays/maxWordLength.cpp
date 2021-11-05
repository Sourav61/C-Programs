#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the length of the character array: " << endl;
    cin >> n;
    cin.ignore();

    char arr[n + 1];

    cout << "Enter the character array of length " << n << endl;
    cin.getline(arr, n);
    cin.ignore();

    int i = 0;
    int currLen = 0, maxLen = 0;

    while (1)
    {
        // cout << arr;
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currLen > maxLen)
            {
                maxLen = currLen;
            }

            currLen = 0;
        }
        else
            currLen++;
        if (arr[i] == '\0')
        {
            break;
        }

        i++;
    }

    cout << "The maximum word length in the character array " << arr << " is: " << maxLen << endl;

    return 0;
}
