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
    signon();

    return 0;
}

// 1st Program

// int x, y;
// for (x = 0, y = 0; x + y < 10; ++x)
// {
//     printf("Enter  a  key  from  keyword:  ");
//     y = getchar();
//     y = y - '0';
//     printf("your  entered  keyword  is:	%c\n", y);
//     printf("And  ASCII  value  for  your  entered  key  is:	%d", y);
// }
// return 0;

// 2nd Program

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
