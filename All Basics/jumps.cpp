#include<iostream>
using namespace std;

int main(){
    int pocketMoney = 3000;
    int day;
    cin>>day;
    for(int date=1;date<30;date++){

        if(date==day&&pocketMoney>0){
            cout<<"You can enjoy today with Rs "<<pocketMoney<<endl;
            break;
        }

        if(date%2==0){
            continue;
        }

        if(pocketMoney==0){
            break;
        }

        cout<<"Go out today on "<<date<<endl;
        pocketMoney-=300;
    }

    
}