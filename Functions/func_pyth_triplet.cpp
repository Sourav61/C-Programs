#include<iostream>
using namespace std;

// int check(int a,int b,int c){
//     if((a*a) == (b*b)+(c*c) || (b*b) == (a*a)+(c*c) || (c*c) == (a*a)+(b*b)){
//         return 1;
//     }else{
//         return 0;
//     }
// }

bool check(int a,int b,int c){
    int x = max(a,max(b,c));
    int y,z;

    if(x==a){
        y=b;
        z=c;
    }else if(x == b){
        y=a;
        z=c;
    }else{
        y=a;
        z=b;
    }

    if(x*x == y*y+z*z)
        return true;
    else
        return false;
}

int main(){
    int a,b,c;
    cout<<"Enter the three numbers to check for a pythagorean triplet"<<endl;
    cin>>a>>b>>c;

    if(check(a,b,c)){
        cout<<"The nummbers :"<<a<<", "<<b<<" and "<<c<<" together make a Pythagorean triplet";
    }
    else{
        cout<<"The numbers :"<<a<<", "<<b<<" and "<<c<<" together do not make a Pythagorean triplet";
    }

    return 0;
}
