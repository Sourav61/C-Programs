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
    int n,ans;
    cout<<"Enter the number of rows of the Pascal Triangle: "<<endl;
    cin>>n;
    cout<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }

    return 0;
}
