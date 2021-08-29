#include<iostream>
using namespace std;

int main(){
    
    int n,i;
    cout<<"Enter a number"<<endl;
    cin>>n;

    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"The entered number "<<n<<" is not prime number as it is divisible by "<<i<<endl;
            break;
        }
    }
    if(i==n){
    cout<<"The entered number "<<n<<" is a prime number"<<endl;
    }
}