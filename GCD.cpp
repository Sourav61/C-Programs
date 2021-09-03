#include<iostream>
using namespace std;

int main(){
    int a,b,i=0,res=0;
    cout<<"Enter the first number"<<endl;
    cin>>a;

    cout<<"Enter the second number"<<endl;
    cin>>b;

    for(i=2;i<=a+b;i++){
        if(a%i==0 && b%i==0){
            res=i;
        }
    }
    cout<<res;
    return 0;
}
