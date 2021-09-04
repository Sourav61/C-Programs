#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    for(int i=1;i<=n;i++){
        cout<<2*i<<" ";
        sum+=2*i-1;
    }
    cout<<"\n\nThe sum of first "<<n<<" even numbers is: "<<sum<<endl;
}
