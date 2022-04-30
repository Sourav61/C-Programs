#include <iostream>
using namespace std;

int countTiles(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    return countTiles(n - 1) + countTiles(n - 2);
}

int main()
{
    int n;
    cout << "Please enter the number of blocks: " << endl;
    cin >> n;

    cout << "The total possible way of filling tiles in blocks are: " << countTiles(n) << endl;
}