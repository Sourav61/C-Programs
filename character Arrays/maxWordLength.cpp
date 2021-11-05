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
    int st = 0, maxSt = 0;

    while (1)
    {
        // cout << arr;
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currLen > maxLen)
            {
                maxLen = currLen;
                maxSt = st;
            }

            currLen = 0;
            st = i + 1;
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

    cout << "The word with the maximum length in the character array " << arr << " is: "
         << " ";

    for (int i = 0; i < maxLen; i++)
    {
        cout << arr[i + maxSt];
    }

    return 0;
}
