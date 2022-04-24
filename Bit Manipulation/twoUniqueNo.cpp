#include <iostream>
using namespace std;

int setsBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

void twoUnique(int a[], int n)
{
    int xorSum = 0;
    for (int i = 0; i < n; i++)
    {
        xorSum = xorSum ^ a[i];
    }

    int tempXor = xorSum;
    int setBit = 0;
    int pos = 0;
    while (setBit != 1)
    {
        setBit = xorSum & 1;
        pos++;
        xorSum = xorSum >> 1;
    }

    int newXor = 0;

    for (int i = 0; i < n; i++)
    {
        if (setsBit(a[i], pos - 1))
        {
            newXor = newXor ^ a[i];
        }
    }

    cout << newXor << endl;
    cout << (tempXor ^ newXor) << endl;
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: " << endl;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element at the position " << i << " in the array: " << endl;
        cin >> a[i];
    }

    cout << "The 2 unique elements that do not exist in pairs in the given array are: " << endl;
    twoUnique(a, n);
    return 0;
}