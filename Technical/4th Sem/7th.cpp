#include <iostream>
using namespace std;

int main()
{
    char ch[40] = "Hey There,Sunny Bansal here";

    for (char *str = ch; *str == str[0]; str++)
    {
        cout << ch << endl;
        break;
    }
    return 0;
}