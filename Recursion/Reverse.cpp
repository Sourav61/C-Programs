#include <iostream>
using namespace std;

void rev(string s)
{
    if(s.length() == 0){
        return;
    }
    
    string ros = s.substr(1);
    
    rev(ros);
    cout<<s[0]<<endl;
}

int main()
{
    string s;
    cout << "Please any string or word: " << endl;
    cin >> s;

     cout << "The reverse of the given string " << s << " is: " << endl;
    rev(s);
    return 0;
}