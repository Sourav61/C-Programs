#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    float sum;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++){
        sum+=1/(pow(i,i));
        cout<<1/pow(i,i)<<endl;
    }
    cout<<"\nThe sum of above series is: "<<sum<<endl;
}
