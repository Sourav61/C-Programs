#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;

    int rev=0;
    while(n!=0){
        rev = rev*10+(n%10);
        n=n/10;
    }

    cout<<"The reverse of the given number is: "<<rev<<endl;


    return 0;
}
