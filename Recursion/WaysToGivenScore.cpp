#include <iostream>
using namespace std;

int pathScore(int n)
{
    int sum, count;
    if (sum > n)
    {
        pathScore(int n);
        return 0;
    }

    if (n > 10)
    {
        sum += 10;
        count++;
        pathScore(n - 10);
    }
    else if (n >= 5)
    {
        sum += 5;
        count++;
        pathScore(n - 5);
    }
    else if (n >= 3)
    {
        sum += 3;
        count++;
        pathScore(n - 3);
    }
    if (sum == n)
    {
        return count;
    }
}

int main()
{
    int n;
    cout << "Please Enter the number here: " << endl;
    cin >> n;

    // cout << "The number of paths possible to reach " << n << " using only possible combinations of 3,5 or 10 are: " << < endl;
    cout << pathScore(n);

    return 0;
}
