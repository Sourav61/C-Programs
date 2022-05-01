#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p;
    p = &a;

    cout << *p << endl;

    int **q = &p;

    cout << "Destructuring pointer once: " << endl;

    cout << *q << endl;

    cout << "Destructuring pointer twice: " << endl;

    cout << **q << endl;
}
