#include<iostream>
using namespace std;

int main(){
    int n,rem,sum=0;
    cout<<"Enter a number"<<endl;
    cin>>n;

    while(n!=0){
        rem=n%10;
        sum+=rem;
        n=n/10;
    }
    cout<<"The sum of the digits of given number is "<<sum<<endl;

    return 0;
}
