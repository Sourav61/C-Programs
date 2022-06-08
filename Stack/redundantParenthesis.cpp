#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter the mathematical operation: "<<endl;
    cin>>s;

    stack<char> st;
    bool ans = false;
    for(int i=0;i<s.size();i++){
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
            st.push(s[i]);
        }else if(s[i] == '('){
            st.push(s[i]);
        }else if(s[i] == ')'){
            if(st.top() == '('){
                ans = true;
            }
            while(st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/'){
                st.pop();
            }
            st.pop();
        }
    }

    ans == 1 ? cout<<"There are redundant parenthesis present in the given string!" : cout<<"There are no redundant parenthesis in the given string!"<<endl;

    return 0;
}
