#include<iostream>
using namespace std;

int main(){

    int n1,n2;

    cin>>n1>>n2;

    int max, min;

    if(n1>n2){
        max=n1;
        min=n2;
    }
    else{
        max=n2;
        min=n1;
    }

    cout<<"Maximum of the given two numbers is = "<<max<<endl;
    cout<<"Minimum of the given two numbers is = "<<min<<endl;

    return 0;
}