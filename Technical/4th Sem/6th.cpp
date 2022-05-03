#include <iostream>
using namespace std;

int main()
{
    char ch = '\0';
    for (;;)
    {
        ch = getchar();

        if (ch == 'A')
        {
            break;
        }
    }
    cout << "You typed A" << endl;

    return 0;
}