#include <iostream>
using namespace std;

int knapsack(int value[], int wt[], int n, int W)
{
    if (W == 0 || n == 0)
    {
        return 0;
    }

    if (wt[n - 1] > W)
    {
        return knapsack(value, wt, n - 1, W);
    }

    return max(knapsack(value, wt, n - 1, W - wt[n - 1]) + value[n - 1], knapsack(value, wt, n - 1, W));
}

int main()
{
    int n;
    cout << "Enter the total number of items: " << endl;
    cin >> n;

    int W;
    cout << "Enter the maximum weight(capacity) of the given knapsack: " << endl;
    cin >> W;

    int wt[n], val[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the weight and value of the " << i << "th item: " << endl;
        cin >> wt[i] >> val[i];
    }

    cout << "The maximum value after selecting best possible items is: " << knapsack(val, wt, n, W) << endl;
    return 0;
}