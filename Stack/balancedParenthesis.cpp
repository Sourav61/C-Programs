#include<iostream>
#include<stack>
using namespace std;

// class Stack(){
//     int top;
//     int *arr;

//     public: 
//         Stack(){
//             top = -1;
//             arr = new int[n];
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

//             top--;
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

bool isValid(string s){
    stack<char> st;
    bool ans = true;

    for(int i=0;i<s.size();i++){
        if(s[i] == '{' || s[i] == '[' || s[i] == '('){
            st.push(s[i]);
        }else if(s[i] == ')'){
            if(!st.empty() and st.top() == '('){
                st.pop();
            }else{
                ans = false;
                break;
            }
        }else if(s[i] == '}'){
            if(!st.empty() and st.top() == '{'){
                st.pop();
            }else{
                ans = false;
                break;
            }
        }else if(s[i] == ']'){
            if(!st.empty() and st.top() == '['){
                st.pop();
            }else{
                ans = false;
                break;
            }
        }
    }

    if(!st.empty()){
        return false;
    }

    return ans;
}

int main(){
    string s = "{[()]}";

    // cout<<isValid("{[()}]")<<endl;
    isValid(s) ? cout<<"Valid String" : cout<<"Invalid String";

    return 0;
}