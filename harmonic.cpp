#include<iostream>
using namespace std;

int main(){
    int n;
    float sum=0.0;
    cout<<"Input the number of terms: "<<endl;
    cin>>n;

    for(int i=1;i<=n;i++){
        // sum+=1/i;
        sum+=1/float(i);
        if(i<=n-1)
            cout<<"1/"<<i<<" + ";
        else
            cout<<"1/"<<i;
    }
    cout<<endl<<endl;
    cout<<"The sum of the given series is: "<<sum<<endl;
}
