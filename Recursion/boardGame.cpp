#include <iostream>
using namespace std;

int countPath(int s, int e)
{
    if (s == e)
    {
        return 1;
    }
    if (s > e)
    {
        return 0;
    }

    int count = 0;

    for (int i = 1; i <= 6; i++)
    {
        count += countPath(s + i, e);
    }

    return count;
}

int main()
{
    int a, b;
    cout << "Please enter the starting point: " << endl;
    cin >> a;

    cout << "Please enter the finishing point: " << endl;
    cin >> b;

    cout << "The number of paths to go from " << a << " to " << b << " is: " << countPath(a, b) << endl;

    return 0;
}