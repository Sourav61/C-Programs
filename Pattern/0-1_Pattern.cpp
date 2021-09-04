#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){

            // Method-1(Self)

            // if((j%2==0 && i%2==0) || (j%2!=0 && i%2!=0))
            //     cout<<1<<" ";

            // else
            //     cout<<0<<" ";
        
            // --------------------------------------------------------

            // Method-2

            if((i+j)%2==0)
                cout<<"1 ";    
        
            else
                cout<<"0 ";
        }

        cout<<endl;
    }
    
    return 0;
}
