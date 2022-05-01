#include<iostream>
using namespace std;

int swap(int a,int b){
    int temp;
    
    temp=a;
    a=b;
    b=temp;

    cout<<a<<" "<<b<<endl;;

    return 0;
}

int main(){
    int a,b;
    cout<<"Enter the first number: "<<endl;
    cin>>a;

    cout<<"Enter the second number: "<<endl;
    cin>>b;

    cout<<"After the swapping the two numbers "<<a<<" and "<<b<<" we get: "<<swap(a,b);

    return 0;
}
