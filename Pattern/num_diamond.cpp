#include<iostream>
using namespace std;

int main(){
    int n,i,j,k;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    for(i=1;i<=n;i++){
        for(j=i;j<n;j++){
            cout<<" ";
        }
        for(k=1;k<2*i;k++){
            cout<<k;
        }
        cout<<endl;
    }
    for(i=4;i>=1;i--){
        for(j=i;j<n;j++){
            cout<<" ";
        }
        for(k=1;k<2*i;k++){
            cout<<k;
        }
        cout<<endl;
    }
    return 0;

}
