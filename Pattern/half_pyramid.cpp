#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=n-i){
                cout<<" ";
            }else{
                cout<<"*";
            }
        }


        // for(int j=0;j<n-i;j++){
        //     cout<<" ";
        // }
        // for(int j=0;j<i;j++){
        //     cout<<"*";
        // }

        cout<<endl;
    }

    return 0;
}
