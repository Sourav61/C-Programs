#include <iostream>
using namespace std;

string keypadArr[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void keypadPhone(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    char ch = s[0];
    string code = keypadArr[ch - '0'];
    string ros = s.substr(1);

    for (int i = 0; i < code.length(); i++)
    {
        keypadPhone(ros, ans + code[i]);
    }
}

int main()
{
    string s;
    cout << "Please enter position of buttons to be matched on the keyboard: " << endl;
    cin >> s;

    // cout << <<endl;
    keypadPhone(s, "");
    return 0;
}