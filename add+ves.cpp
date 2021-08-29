#include<iostream>
using namespace std;

int main(){
    int n;
    int sum=0;
    cout<<"Enter a positive number: ";
    cin>>n;

    while(n>=0){
        sum+=n;
        cout<<"Enter another positive number: ";
        cin>>n;
    }

    cout<<"The sum of all given positive numbers is: "<<sum<<endl;
}