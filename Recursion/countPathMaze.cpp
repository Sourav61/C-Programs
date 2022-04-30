#include <iostream>
using namespace std;

int countPathMaze(int n, int i, int j)
{
    if (i == n - 1 && j == n - 1)
    {
        return 1;
    }
    if (i >= n || j >= n)
    {
        return 0;
    }

    return countPathMaze(n, i + 1, j) + countPathMaze(n, i, j + 1);
}

int main()
{
    int n, a, b;
    cout << "Enter the number of rows and column in the maze: " << endl;
    cin >> n;

    cout << "Enter the starting point: " << endl;
    cin >> a;

    cout << "Enter the ending point: " << endl;
    cin >> b;

    cout << "The total number of paths possible for covering till end are: " << countPathMaze(n, a, b) << endl;

    return 0;
}