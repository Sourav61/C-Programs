#include <iostream>
#include <string.h>
using namespace std;

void signon(void)
{
    char str[20] = " ";
    int x;
    for (x = 0; x < 3 && strcmp(str, "passhaisahi"); ++x)
    {
        cout << "\n Enter the Password: ";
        gets(str);
    }

    if (x == 3)
        return;
}

int main()
{
    // 1st Program

    // int x, y;
    // for (x = 0; y = 0; x + y < 10, ++x)
    // {
    //     y = getchar();
    //     y = y - '0';
    // }

    // 2nd Program

    // signon();

    // 3rd Program

    // for (int x = 0; x != 123;)
    // {
    //     scanf("%d", &x);
    // }

    // 4th Program

    // for (;;)
    // {
    //     printf("SCANNING \n");
    // }

    return 0;
}