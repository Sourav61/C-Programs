#include <bits/stdc++.h>
using namespace std;

// int decimalToBinary(int n){
//     int x=1;
//     int ans=0;
//     while(x<=n){
//         x*=2;
//     }
//     x/=2;

//     while (x>0)
//     {
//         int lastDigit = n/x;
//         n-=lastDigit*x;
//         x/=2;
//         ans=ans*10+lastDigit;
//     }

//     return ans;
    
// }

// int decimalToOctal(int n){
//     int x=1;
//     int ans=0;
//     while(x<=n){
//         x*=8;
//     }
//     x/=8;

//     while (x>0)
//     {
//         int lastDigit = n/x;
//         n-=lastDigit*x;
//         x/=8;
//         ans=ans*10+lastDigit;
//     }

//     return ans;
// }

string decimalToHexadecimal(int n){
    int x=1;
    string ans= "";
    while(x<=n)
        x*=16;
    x/=16;

    while(x>0){
        int lastDigit = n/x;
        n -= lastDigit*x;
        x/=16;

        if(lastDigit <= 9){
            ans=ans + to_string(lastDigit);
        }
        else{
            char c = 'A' + lastDigit -10;
            ans.push_back(c);
        }
    }

    return ans;
}

int main(){
    int n;
    cout<<"Enter a number to convert it to various representations: "<<endl;
    cin>>n;

    // cout<<"The entered decimal number "<<n<<" can be represented as "<<decimalToBinary(n)<<" in binary sytem."<<endl;
    // cout<<"The entered decimal number "<<n<<" can be represented as "<<decimalToOctal(n)<<" in octal sytem."<<endl;
    cout<<"The entered decimal number "<<n<<" can be represented as "<<decimalToHexadecimal(n)<<" in hexadecimal sytem."<<endl;
}
