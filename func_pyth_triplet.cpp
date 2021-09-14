#include<iostream>
using namespace std;

int check(int a,int b,int c){
    if((a*a) == (b*b)+(c*c) || (b*b) == (a*a)+(c*c) || (c*c) == (a*a)+(b*b)){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(check(a,b,c)){
        cout<<"The numbers :"<<a<<", "<<b<<" and "<<c<<" together make a Pythagorean triplet";
    }
    else{
        cout<<"The numbers :"<<a<<", "<<b<<" and "<<c<<" together do not make a Pythagorean triplet";
    }

    return 0;
}
