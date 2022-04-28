#include <iostream>
using namespace std;

string moveX(string s)
{
    if (s.length() == 0)
    {
        return "";
    }

    char ch = s[0];

    string ans = moveX(s.substr(1));

    if (ch == 'x')
    {
        return ans + ch;
    }

    return ch + ans;
}

int main()
{
    string s;
    cout << "Please enter the word: " << endl;
    cin >> s;

    cout << "The string that you get when you place char x at the end is: " << moveX(s) << endl;

    return 0;
}