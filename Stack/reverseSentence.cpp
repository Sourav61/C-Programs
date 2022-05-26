#include<bits/stdc++.h>
using namespace std;

// class Stack(){
//     int *arr;
//     int top;

//     Stack(){
//         arr = new int[n];
//         top = -1;
//     }

//     void push(int x){
//         if(top == n-1){
//             cout<<"Stack is Overflown"<<endl;
//         }

//         top++;
//         arr[top] = x;
//     }

//     void pop(){
//         if(top == -1){
//             cout<<"Stack is empty"<<endl;
//             return;
//         }

//         top--;
//     }

//     int top(){
//         if(top == -1){
//             cout<<"Stack is empty"<<endl;
//             return;
//         }

//         return arr[top];
//     }

//     bool empty(){
//         return arr[top] == -1;
//     }
// }

void reverseSentence(string s){
    stack<string> st;

    for(int i=0;i<s.length();i++){
        string word = "";

        while(s[i] != ' ' && i<s.length()){
            word+=s[i];
            i++;
        }

        st.push(word);
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
}

int main(){
    
    // Using stack implementation directly from stl
    // stack<int> sp;

    string s = "Hey, How are you doing?";

    reverseSentence(s);

    return 0;   
}