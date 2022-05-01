#include<iostream>
using namespace std;

int main(){

    int i=10, j=20;
    float k;
        //9  //20  //9   //20  //10  //20  //11  //20
    k = --i + j++ / i++ * --j - i++ + j++ * i++ - --j;

    cout<<i<<endl;//12
    cout<<j<<endl;//20
    cout<<k<<endl;
}