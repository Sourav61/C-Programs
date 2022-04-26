#include <iostream>
using namespace std;

void dec(int n)
{
    if (n == 0)
    {
        return;
    }

    cout << n << endl;
    dec(n - 1);
}

void inc(int n)
{

    if (n == 0)
    {
        return;
    }

    inc(n - 1);
    cout << n << endl;
}

int main()
{
    int n;
    cout << "Please enter any number: " << endl;
    cin >> n;

    cout << "The series in descending order starting from " << n << " is: " << endl;

    dec(n);

    cout << "The series in ascending order starting from " << n << " is: " << endl;

    inc(n);

    return 0;
}