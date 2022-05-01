#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter the number to check whether it is an Armstrong number or not: " << endl;
    cin >> n;
    int a = n;

    while (n != 0)
    {
        sum += pow((n % 10), 3);
        n = n / 10;
    }

    if (sum == a)
    {
        cout << "The entered number " << a << " is an Armstrong number!!" << endl;
    }
    else
    {
        cout << "The entered number " << a << " is not an Armstrong number!!" << endl;
    }

    return 0;
}
