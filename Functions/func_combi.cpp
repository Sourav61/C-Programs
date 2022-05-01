#include<iostream>
using namespace std;

int fact(int num){
    int mult=1;
    while(num>0){
        mult*=num;
        num--;
    }
    return mult;
}

int main(){
    int n,r;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    cout<<"Enter the value of r: "<<endl;
    cin>>r;

    int ans = fact(n)/(fact(r)*fact(n-r));

    cout<<"The method of selecting "<<r<<" objects from a set of "<<n<<" objects is: "<<ans<<endl;

    return 0;
}
