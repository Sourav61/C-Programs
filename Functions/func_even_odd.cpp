#include<iostream>
using namespace std;

void eveodd(int num){
    if(num%2==0){
        cout<<"even";
    }else{
        cout<<"odd";
    }

    return;
}

int main(){
    int n;
    cout<<"Enter the number to check if it's even or odd: "<<endl;
    cin>>n;

    eveodd(n);

    return 0;
}
