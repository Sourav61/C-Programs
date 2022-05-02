#include <iostream>
using namespace std;

void recursiveName(string n, int count)
{
    if (count == 5)
    {
        return;
    }
    count++;
    cout << "Your name is: " << n << endl;

    recursiveName(n, count);
}

int main()
{
    string n;
    cout << "Please enter your name: " << endl;
    cin >> n;

    int count = 0;

    recursiveName(n, count);

    return 0;
}