#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string str = "I have to do this at any cost right now only!!";

    // convert into uppercase

    // for (int i = 0; i < str.size(); i++)
    // {
    //     if (str[i] >= 'a' && str[i] <= 'z')
    //     {
    //         str[i] -= 32;
    //     }
    // }

    // ==================Using transform method to convert the string into uppercase.

    transform(str.begin(), str.end(), str.begin(), ::toupper);

    cout << str << endl;

    // convert to lower case

    // for (int i = 0; i < str.size(); i++)
    // {
    //     if (str[i] >= 'A' && str[i] <= 'Z')
    //     {
    //         str[i] += 32;
    //     }
    // }

    // ==================Using transfrom method to convert the string into lowercase.

    transform(str.begin(), str.end(), str.begin(), ::tolower);

    cout << str << endl;

    return 0;
}