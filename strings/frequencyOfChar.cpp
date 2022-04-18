#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string str = "This is string to test frequency count of most common character in this string!!";

    int f[26];

    for (int i = 0; i < 26; i++)
    {
        f[i] = 0;
    }

    for (int i = 0; i < str.size(); i++)
    {
        f[str[i] - 'a']++;
    }

    char ans = 'a';
    int maxF = 0;

    for (int i = 0; i < 26; i++)
    {
        if (f[i] > maxF)
        {
            maxF = f[i];
            ans = i + 'a';
        }
    }

    cout << "The most common character in the given string is " << ans << " and it occurs " << maxF << " times in the given string!!";
}