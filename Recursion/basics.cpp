#include <iostream>
using namespace std;

int Sum(int n)
{

    if (n == 0)
    {
        return 0;
    }

    int prevSum = Sum(n - 1);

    return n + prevSum;
}

int power(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }

    int prevPower = power(n, p - 1);
    return n * prevPower;
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    int prevFact = factorial(n - 1);

    return n * prevFact;
}

int main()
{
    int n;
    // cout << "Enter the numbers till which you want to find the sum: " << endl;
    cout << "Please enter any number " << endl;
    cin >> n;
    // cin >> p;

    // cout << "The sum of first " << n << " numbers is: " << Sum(n) << endl;

    // cout << "The power of first " << n << " numbers is: " << power(n, p) << endl;

    cout << "The factorial of the given number " << n << " calculated using Recursion is: " << factorial(n) << endl;

    return 0;
}