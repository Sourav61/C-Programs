// Perfect Number = Number which is sum of it's divisors

#include<iostream>
using namespace std;

int main(){
    int num,sum;
    for(int i=1;i<=500;i++){
        for(num=1;num<=i/2;num++){
            if(i%num==0 && num<i){
                sum+=num;
            }
        }
        if(sum==i){
            cout<<sum<<endl;
        }
        sum=0;
    }
    return 0;
}
