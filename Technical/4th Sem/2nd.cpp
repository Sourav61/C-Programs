#include <bits/stdc++.h>

void sign_in(void)
{
    char str[20] = "";
    int x;
    char ID[20] = "Sunny";
    char pass[10] = "Bansal";
    printf("Enter  your  ID:\n  ");
    gets(str);
    if (strcmp(str, ID) == 0)
    {
        char temp[20] = "ok";
        for (int i = 0; i < 20; i++)
            str[i] = temp[i];
    }
    else
        printf("wrong  ID:  \n");
    for (x = 0; x < 3 && (strcmp(str, "ok") == 0); ++x)
    {
        printf("Enter  your  password  :\n  ");
        gets(str);
        if (strcmp(str, pass) == 0)
        {
            printf("login  successful:\n  ");
            break;
        }
        else
        {
            printf("wrong  password:\n");
            printf("you  have  %d  more  chance\n", 2 - x);
            char temp[20] = "ok";
            for (int i = 0; i < 20; i++)
                str[i] = temp[i];
        }
    }
}
int main()
{
    sign_in();
    return 0;
}