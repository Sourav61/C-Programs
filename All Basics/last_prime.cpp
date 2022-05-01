#include<iostream>
using namespace std;

int main(){
    int n,a=0;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    for(int i=n-1;i>=1;i--){
        for(int j=2;j<i/2;j++){
            if(i%j==0){
                a++;
            }

        }
        if(a==0){
            if(n==1){
                cout<<"No prime number less than 2"<<endl;
                break;
            }
            cout<<i<<" is the last prime number before "<<n<<endl;
            break;
        }
        a=0;
    }
    return 0;
    
}
