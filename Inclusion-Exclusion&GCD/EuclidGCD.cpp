#include <iostream>
using namespace std;

int EuclidGCD(int a, int b)
{
    while (b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }

    return a;
}

int main()
{
    int a, b;
    cout << "Please enter the first no. " << endl;
    cin >> a;
    cout << "Please enter the second no. " << endl;
    cin >> b;

    cout << "The GCD of the two given no. " << a << " and " << b << " is: " << EuclidGCD(a, b) << endl;

    return 0;
}