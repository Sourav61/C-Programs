#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *b = &a;

    // cout << *b << endl;
    // *b = 20;
    // cout << *b << endl;

    cout << b << endl;
    b++;
    cout << b << endl;
}
