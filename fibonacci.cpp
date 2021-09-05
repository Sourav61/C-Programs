#include<iostream>
using namespace std;

int main(){
    int n,a=0,b=1;
    cout<<"Enter the number of terms of Fibonacci series: "<<endl;
    cin>>n;

    cout<<a<<" "<<b<<" ";  

    for(int i=2;i<n;i++){
        int c=a+b;
        
        cout<<c<<" ";
        a=b;
        b=c;
    }
}
