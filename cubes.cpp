#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of terms: "<<endl;
    cin>>n;

    for(int i=0;i<n;i++){
        // cout<<"Number is: "<<i<<" and the cube of the given number is: "<<i*i*i<<endl;
        cout<<"Number is: "<<i<<" and the cube of the given number is: "<<pow(i,3)<<endl;
    }
}
