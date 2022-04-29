#include <iostream>
using namespace std;

void subseqAscii(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    char ch = s[0];
    int code = ch;
    string ros = s.substr(1);

    subseqAscii(ros, ans);
    subseqAscii(ros, ans + ch);
    subseqAscii(ros, ans + to_string(code));
}

int main()
{
    string s;
    cout << "Please enter any string: " << endl;
    cin >> s;

    cout << "After arranging the given string " << s << " in required manner, it becomes: " << endl;
    subseqAscii(s, "");

    return 0;
}