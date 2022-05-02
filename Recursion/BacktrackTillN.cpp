#include <iostream>
using namespace std;

void backtrackTillN(int i, int n)
{
    if (i < 1)
    {
        return;
    }

    backtrackTillN(i - 1, n);
    cout << i << endl;
}

void backtrackFromN(int i, int n)
{
    if (i > n)
    {
        return;
    }
    backtrackFromN(i + 1, n);
    cout << i << endl;
}

int main()
{
    int n;
    cout << "Enter the number of elements until which you want to print: " << endl;
    cin >> n;

    cout << "The natural numbers till " << n << "are: " << endl;

    backtrackTillN(n, n);

    cout << "The natural numbers till " << n << " in the reverse order are: " << endl;

    backtrackFromN(1, n);

    return 0;
}