#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s, int l)
{
    int n = s.length();

    if (l >= n / 2)
    {
        return true;
    }

    if (s[l] != s[n - l - 1])
    {
        return false;
    }

    return checkPalindrome(s, l + 1);
}

int main()
{
    string s;
    cout << "Enter any word to check if it's a palindrome or not: " << endl;
    cin >> s;

    if (checkPalindrome(s, 0))
    {
        cout << "Yes, The given string " << s << " is a palindrome string!" << endl;
    }
    else
    {
        cout << "No, The given stirng " << s << " is not a palindrome string!" << endl;
    }

    return 0;
}
