#include <iostream>
using namespace std;

void printTillN(int n, int count)
{
    if (count == n)
    {
        return;
    }
    count++;
    cout << count << endl;
    printTillN(n, count);
}

void printTotallN(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << endl;
    printTotallN(n - 1);
}

int main()
{
    int n;
    cout << "Enter the nunmber until which you want to print natural numbers: " << endl;
    cin >> n;

    int count = 0;

    cout << "The natural numbers from 0 to " << n << "are: " << endl;

    printTillN(n, count);

    cout << "The natural numbers in reverse order from " << n << " to 0 are: " << endl;

    printTotallN(n);

    return 0;
}