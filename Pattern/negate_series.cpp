#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int x,n,t=1,sum=0;
    cout<<"Enter the value of x: "<<endl;
    cin>>x;
    cout<<"Enter the number of terms: "<<endl;
    cin>>n;
    cout<<endl;
    for(int i=1;i<=2*n;i++){
        if(i%2!=0){
            int ans=pow(x,i)*t;
            cout<<ans<<endl;
            t=t*-1;
            sum+=ans;            
        }
    }
    cout<<"The sum of the given series upto "<<n<<" term is: "<<sum<<endl;
}
