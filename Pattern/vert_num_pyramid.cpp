#include<iostream>
using namespace std;

int main(){
    int n,i,j,k;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    for(i=1;i<n;i++){
        for(j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }

    for(i=n-1;i>1;i--){
        for(j=1;j<i;j++){
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}
