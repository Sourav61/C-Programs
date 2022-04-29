#include <iostream>
using namespace std;

void subseq(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    char ch = s[0];
    string ros = s.substr(1);

    subseq(ros, ans);
    subseq(ros, ans + ch);
}

int main()
{
    string s;
    cout << "Please enter any string or word: " << endl;
    cin >> s;

    cout << "The subsets of string " << s << " are: " << endl;
    subseq(s, "");

    return 0;
}