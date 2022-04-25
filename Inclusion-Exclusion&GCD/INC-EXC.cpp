#include <iostream>
using namespace std;

int ExcInc(int n, int a, int b)
{
    int c1 = n / a;
    int c2 = n / b;

    int c3 = n / (a * b);

    return c1 + c2 - c3;
}

int main()
{
    int n;
    cout << "Please Enter any number: " << endl;
    cin >> n;

    int a, b;
    cout << "Please enter the numbers that chose the 1st option: " << endl;
    cin >> a;
    cout << "Please enter the numbers that chose the 2nd option: " << endl;
    cin >> b;

    cout << "Applying exclusion-inclusion principle on " << n << " where " << a << " and " << b << " are divisors, the result comes out to be: " << ExcInc(n, a, b) << endl;

    return 0;
}