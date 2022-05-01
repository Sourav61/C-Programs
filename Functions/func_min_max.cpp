#include<iostream>
using namespace std;

int isMax(int a,int b,int c){
    int max=a;
    if(b>max){
        return b;
    }else if(c>max){
        return c;
    }else{
        return a;
    }

    return 0;
}

int isMin(int a,int b,int c){
    int min=a;
    if(b<min){
        return b;
    }else if(c<min){
        return c;
    }else{
        return a;
    }
}

int main(void){
    int a;
    cout<<"Enter the 1st number: "<<endl;
    cin>>a;
    
    int b;
    cout<<"Enter the 2nd number: "<<endl;
    cin>>b;

    int c;
    cout<<"Enter the 3rd number: "<<endl;
    cin>>c;

    cout<<"\nThe largest number amongst the three numbers "<<a<<" "<<b<<" "<<c<<" "<<" is: "<<isMax(a,b,c);

    cout<<"\nThe smallest number amongst the three numbers "<<a<<" "<<b<<" "<<c<<" "<<" is: "<<isMin(a,b,c);

    return 0;
}
