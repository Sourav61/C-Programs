#include <iostream>
using namespace std;

int main()
{
    char a = 'a';
    char *str = &a;

    cout << str << endl;
    str++;
    cout << str << endl;

    return 0;
}
