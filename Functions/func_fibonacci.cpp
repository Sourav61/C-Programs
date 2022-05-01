#include<iostream>
using namespace std;

void fib(int n){

    int a=0;
    int b=1;
    int c;

    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        c=a+b;
        a=b;
        b=c;
    }

    return ;
}

int main(){
    int n;
    cout<<"Enter the number of terms of Fibonacci Sequence"<<endl;
    cin>>n;

    fib(n);

    return 0;
    
}
