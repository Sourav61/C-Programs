#include <bits/stdc++.h>
using namespace std;

// int binaryToDecimal(int n){
//     int ans = 0;
//     int x = 1;
//     while(n>0){
//         int y=n%10;
//         ans+=x*y;
//         x*=2;
//         n/=10;
//     }
//     return ans;
// }

// int octalToDecimal(int n){
//     int ans = 0;
//     int x = 1;
//     while(n>0){
//         int y=n%10;
//         ans+=x*y;
//         x*=8;
//         n/=10;
//     }
//     return ans;
// }

int hexadecimalToDecimal(string N){
    int ans = 0;
    int x = 1;

    int s = N.size();
    for(int i=s-1;i>=0;i--){
        if(N[i] >= '0' && N[i] <= '9'){
            ans += x*(N[i]-'0');
        }
        else if(N[i] >= 'A' && N[i] <= 'F'){
            ans += x*(N[i]-'A'+10);
        } 
        x*=16;
    }
    return ans;
}


int main(){
    string n;
    cout<<"Enter a number or a character to convert it to decimal number: "<<endl;
    cin>>n;

    // cout<<"The binary number " <<n<<" when converted to it's decimal representation gives: "<<binaryToDecimal(n) <<endl;

    // cout<<"The octal number " <<n<<" when converted to it's decimal representation gives: "<<octalToDecimal(n) <<endl;

    cout<<"The hexadcimal number " <<n<<" when converted to it's decimal representation gives: "<<hexadecimalToDecimal(n) <<endl;
}
