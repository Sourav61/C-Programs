#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows of star palindromic pattern: "<<endl;
    cin>>n;

    // Method-1(Self)

    // for(int i=1;i<=n;i++){
    //     int j;
    //     for(j=1;j<=n-i;j++){
    //         cout<<"   ";
    //     }
    //     for(;j<=n;j++){
    //         cout<<" * ";
    //     }
    //     // k=2;
    //     for(;j<=n+i-1;j++){
    //         cout<<" * ";
    //     }
    //     cout<<endl;

    // }
        
    // for(int i=n;i>0;i--){

    //     int j;
    //     for(j=n-i;j>0;j--){
    //         cout<<"   ";
    //     }
    //     for(;j<=i-1;j++){
    //         cout<<" * ";
    //     }

    //     for(;j>1;j--){
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }

    // -----------------------------------------------------------------------

    //Method-2

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<" *";
        }
        cout<<endl;
    }

    for(int i=n;i>0;i--){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<" *";
        }
        cout<<endl;
    }
}
