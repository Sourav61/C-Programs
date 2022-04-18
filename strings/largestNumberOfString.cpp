#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string str = "123456";

    sort(str.begin(), str.end(), greater<int>());

    cout << str << endl;
}