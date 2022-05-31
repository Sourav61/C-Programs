#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

// class Stack(){
//     public:
//     int top;
//     int *arr;

//     Stack(int n){
//         arr = new int[n];
//         top = -1;
//     }

//     void push(int x){
//         if(top == n-1){
//             cout<<"Stack Overflow"<<endl;
//             return;
//         }

//         top++;
//         arr[top] = x;
//     }

//     void pop(){
//         if(top == -1){
//             cout<<"Stack Empty"<<endl;
//             return;
//         }

//         top--;
//     }

//     int top(){
//         if(top == -1){
//             cout<<"Stack empty"<<endl;
//             return;
//         }

//         return arr[top];
//     }

//     bool empty(){
//         return top == -1;
//     }
// }

int prefixEvaluation(string s){
    stack<int> st;

    for(int i=s.length()-1;i>=0;i--){

        if(s[i] >= '0' && s[i] <= '9'){
            st.push(s[i] - '0');
        }else{
            int a = st.top();
            st.pop();

            int b = st.top();
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
    
    cout<<prefixEvaluation("-+7*45+20")<<endl;
    
    return 0;
}