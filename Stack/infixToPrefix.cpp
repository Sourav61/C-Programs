#include<bits/stdc++.h>
using namespace std;

// class Stack(){
//     int top;
//     int *arr;

//     public: 
//         Stack(){
//             arr = new int[n];
//             top = -1;
//         }

//         void push(int x){
//             if(top == n-1){
//                 cout<<"Stack Overflow"<<endl;
//                 return;
//             }

//             top++;
//             arr[top] = x;
//         }

//         void pop(){
//             if(top == -1){
//                 cout<<"Stack Empty"<<endl;
//                 return;
//             }

//             top --;
//         }

//         int top(){
//             if(top == -1){
//                 cout<<"Stack Empty"<<endl;
//                 return;
//             }

//             return arr[top];
//         }

//         bool empty(){
//             return top == -1;
//         }
// }

int prec(char c){
    if(c == '^'){
        return 3;
    }else if(c == '*' || c == '/'){
        return 2;
    }else if(c == '+' || c == '-'){
        return 1;
    }else{
        return -1;
    }
}

string infixToPrefix(string s){
    reverse(s.begin(),s.end());
    
    stack<int> st;
    string res;

    for(int i=0;i<s.length();i++){
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <='Z')){
            res+=s[i];
        }else if(s[i] == ')'){
            st.push(s[i]);
        }else if(s[i] == '('){
            while(!st.empty() && st.top() != ')'){
                res+=st.top();
                st.pop();
            }

            if(!st.empty()){
                st.pop();
            }
        }else{
            while(!st.empty() && prec(st.top()) >= prec(s[i])){
                res+=st.top();
                st.pop();
            }

            st.push(s[i]);
        }
    }

    while(!st.empty()){
        res += st.top();
        st.pop();
    }

    reverse(res.begin(),res.end());

    return res;
}

int main(){

    cout<<infixToPrefix("(a-b/c)*(a/k-l)");

    return 0;
}