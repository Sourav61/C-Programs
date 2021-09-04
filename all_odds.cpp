#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    for(int i=0;i<2*n;i++){
        if(i%2!=0){
            cout<<i<<" ";
            sum+=i;
        }
    }
    cout<<"\nThe sum of first "<<n<<" odd numbers is: "<<sum<<endl;
}
