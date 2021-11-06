#include <iostream>
using namespace std;

int main()
{
    int arr[8] = {0, 1, 1, 1, 0, 1, 0, 0};

    int b[8];

    for (int i = 0; i < 8; i++)
    {
        if (i == 0)
        {
            b[i] = 0 ^ arr[i + 1];
        }
        else if (i == 7)
        {
            b[i] = arr[i - 1] ^ 0;
        }
        else
        {
            b[i] = arr[i - 1] ^ arr[i + 1];
        }
    }

    for (int i = 0; i < 8; i++)
    {
        cout << b[i] << " ";
    }
}
