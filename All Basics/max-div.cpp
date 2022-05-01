#include<iostream>
using namespace std;

int main(){
    int n,a;
    cin>>n;
    int i=0;
    for(a=n;a>=0;a-=n/2){
        if(a%2==0){
            i++;
            continue;
        }break;
    }

    cout<<i<<endl;

    // cout<<"The number "<<n<<" can be divided "<<i<<"number of times by 2"<<endl;

    return 0;
}