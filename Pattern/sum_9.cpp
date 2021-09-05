#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,t=9,sum=0;
    cout<<"Enter the number of terms: "<<endl;
    cin>>n;

    // Method-1(Self)

    // cout<<"The sum of the series 9+99+999+... upto "<<n<<" terms is: "<<(pow(10,n+1)-10-9*n)/9;

    // ------------------------------------------------------------------------------------------------

    // Method-2

    for(int i=1;i<=n;i++){
        sum+=t;
        if(i==n)
            cout<<t;
        else
            cout<<t<<" + ";
        t = t*10+9;
    }

    cout<<"\nThe sum of the series above is: "<<sum<<endl;
}
