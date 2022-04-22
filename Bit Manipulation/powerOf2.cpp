#include <iostream>
using namespace std;

int isPowerOf2(int n)
{
    return n && (n & n - 1);
}

int main()
{
    int n;
    cout << "Please enter any number: " << endl;
    cin >> n;

    if (isPowerOf2(n) == 0)
    {
        cout << "The given number " << n << " is a power of 2." << endl;
    }
    else
    {
        cout << "The given number " << n << " is not a power of 2." << endl;
    }
}