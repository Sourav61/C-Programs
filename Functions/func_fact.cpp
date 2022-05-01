#include<iostream>
using namespace std;

int fact(int num){
    int mult=1;
    for(int i=2;i<=num;i++){
        mult*=i;
    }
    return mult;
}


int main(){
    int n;
    cout<<"Enter the number to print it's factorial: "<<endl;
    cin>>n;

    int ans = fact(n);

    cout<<ans<<endl;

    return 0;
}
