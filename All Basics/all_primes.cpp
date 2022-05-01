#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cout << "Enter first number of the range: " << endl;
    cin >> a;

    cout << "Enter the second number of the range: " << endl;
    cin >> b;
    cout << "Prime numbers between " << a << " and " << b << " are: " << endl;
    for (int num = a; num <= b; num++)
    {
        int i;
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                break;
            }
        }

        if (i == num)
        {

            cout << num << endl;
        }
    }

    return 0;
}