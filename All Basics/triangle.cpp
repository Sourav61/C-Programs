#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    // Let a,b,c be the three sides of the triangle

    cin>>a>>b>>c;

    if(a==b && b==c){
        cout<<"Equilateral triangle is formed with the given sides: "<<a<<" "<<b<<" "<<c<<endl;
    }
    else if(a!=b && b!=c && c!=a){
        cout<<"Scalene Triangle is formed with the given sides: "<<a<<" "<<b<<" "<<c<<endl;
    }
    else{
        cout<<"Isoceles Triangle is formed with the given sides: "<<a<<" "<<b<<" "<<c<<endl;
    }

    return 0;
}