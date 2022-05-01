#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    for(int i=1;i<=n;i++){
        cout<<(i*(i+1))/2<<endl;
        sum+=(i*(i+1))/2;
    }
    cout<<"\nThe sum of the above series is: "<<sum<<endl;
}
