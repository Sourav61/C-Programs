#include <iostream>
using namespace std;

void towerOfHanoi(int n, char src, char dest, char helper)
{
    if (n == 0)
    {
        return;
    }
    towerOfHanoi(n - 1, src, helper, dest);
    cout << "Move from " << src << " to " << dest << endl;
    towerOfHanoi(n - 1, helper, dest, src);
}

int main()
{
    int n;
    char src, helper, dest;

    cout << "Please enter any number: " << endl;
    cin >> n;

    cout << "Please enter the source, helper and destination node: " << endl;
    cin >> src >> helper >> dest;

    cout << "The steps to be followed in transfer between source node " << src << " and destination node " << dest << " using helper node " << helper << " is: " << endl;
    towerOfHanoi(n, src, dest, helper);

    return 0;
}