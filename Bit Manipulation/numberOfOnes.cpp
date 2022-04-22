#include <iostream>
using namespace std;

int numberOfOnes(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main()
{
    int n;
    cout << "Please enter any number: " << endl;
    cin >> n;

    cout << "The number of ones in the binary representation of a given number " << n << " is: " << numberOfOnes(n) << endl;
}