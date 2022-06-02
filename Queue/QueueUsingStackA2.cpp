#include<iostream>
#include<stack>

using namespace std;

class queue{
    stack<int> s1;

public:
    void push(int x){
        s1.push(x);
    }

    int pop(){
        if(s1.empty()){
            cout<<"Stack is Empty"<<endl;
            return -1;
        }

        int a = s1.top();
        s1.pop();

        if(s1.empty()){
            return a;
        }

        int item = pop();
        s1.push(a);

        return item;    
    }

    bool empty(){
        if(s1.empty()){
            cout<<"Queue is Empty"<<endl;
            return true;
        }

        return false;
    }
};

int main(){

    queue q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    
    cout<<q.pop()<<endl;
    q.push(5);

    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    return 0;
}