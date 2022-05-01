#include<iostream>
using namespace std;

int main(){
    int n;
    int mult = 1;
    cin>>n;

    for(int i=1;i<=n;i++){
        mult=mult*i;
    }
    cout<<"The factorial of the given number"<<n<<" is : "<<mult;

    return 0;
}