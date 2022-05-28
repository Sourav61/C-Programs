#include<bits/stdc++.h>
using namespace std;

#define n 100

// class Stack{
//     public:
//         int top;
//         int *arr;

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
//                 cout<<"Stack is empty"<<endl;
//                 return;
//             }

//             top--;
//         }

//         int top(){
//             if(top == -1){
//                 cout<<"Stack is empty"<<endl;
//                 return;
//             }

//             return arr[top];
//         }

//         bool empty(){
//             return top == -1;
//         }
// }

void insertAtBottom(stack<int> &st,int ele){

    if(st.empty()){
        st.push(ele);
        return;
    }

    int topp = st.top();

    st.pop();

    insertAtBottom(st,ele);

    st.push(topp);
}

void reverse(stack<int> &st){

    if(st.empty()){
        return;
    }

    int ele = st.top();

    st.pop();

    reverse(st);

    insertAtBottom(st,ele);
}

int main(){

    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    reverse(st);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }

    return 0;
}