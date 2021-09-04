#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows of the given pattern: "<<endl;
    cin>>n;

    for(int i=1;i<=n;i++){
    
        //Method-1(Self)
    
        // for(int j=n;j>=i;j--)
        //     cout<<" ";

        // for(int j=1;j<=i;j++)
        //     cout<<j<<" ";
    
        //----------------------------------------------------

        //Method-2

        for(int j=1;j<=n-i;j++)
            cout<<" ";

        for(int j=1;j<=i;j++)
            cout<<j<<" ";
    
        cout<<endl;
    }

    return 0;
}
