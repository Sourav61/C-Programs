#include<bits/stdc++.h>
using namespace std;

// class Stack(){
//     public:
//         int top;
//         int *arr;

//         Stack(int n){
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

int postFixEvaluation(string s){
    stack<int> st;

    for(int i=0;i<s.length();i++){
        if(s[i] >= '0' && s[i] <= '9'){
            st.push(s[i] - '0');
        }else{
            int b = st.top();
            st.pop();

            int a = st.top();
            st.pop();

            switch(s[i]){
                case '+':
                    st.push(a+b);
                    break;
                case '-':
                    st.push(a-b);
                    break;
                case '*':
                    st.push(a*b);
                    break;
                case '/':
                    st.push(a/b);
                    break;
                case '^':
                    st.push(pow(a,b));
                    break;
            }
        }
    }

    return st.top();
}

int main(){

    cout<<postFixEvaluation("46+2/5*7+");
    return 0;
}