#include <iostream>
using namespace std;

int friendsPairing(int n)
{
    if (n == 0 || n == 1 || n == 2)
    {
        return n;
    }

    return friendsPairing(n - 1) + friendsPairing(n - 2) * (n - 1);
}

int main()
{
    int n;
    cout << "Enter the total number of people to pair: " << endl;
    cin >> n;

    cout << "The total possible ways of pairing " << n << " people are: " << friendsPairing(n) << endl;
    return 0;
}