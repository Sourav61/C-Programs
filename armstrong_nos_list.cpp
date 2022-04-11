#include <iostream>
#include <cmath>
using namespace std;

// int pow(int n, int a)
// {
//     int mult = 1;
//     while (a > 0)
//     {
//         mult *= n;
//         a--;
//     }
//     return mult;
// }

int main()
{
    int a, b;
    cout << "Enter the range of numbers to check armstrong numbers: " << endl;
    cin >> a >> b;
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    cout << "The armstrong numbers between " << a << " and " << b << " are : ";
    for (int i = a; i < b; i++)
    {
        int sum = 0;
        int n = i;
        while (n != 0)
        {
            sum += pow((n % 10), 3);
            n = n / 10;
        }
        if (sum == i)
        {
            cout << i << " ";
        }
    }
}
