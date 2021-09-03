#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,j;
    float x,sum,t,fact,y,m;
    y=2;

    cout<<"Enter the value of X: "<<endl;
    cin>>x;

    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    
    sum=1;
    t=1;
    cout<<"The term 1 value is: "<<t<<endl;
    
    for(int i=1;i<n;i++){
        fact=1;
        for(j=1;j<=y;j++){
            fact*=j;
        }
        t*=-1;
        m=pow(x,y)/fact;
        m*=t;
        cout<<"Term"<<i+1<<" value is: "<<m<<endl;
        sum+=m;
        y+=2;

    }    
    cout<<"The sum of the given series is: "<<sum<<endl;

    return 0;
}
