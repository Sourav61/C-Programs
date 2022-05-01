#include<iostream>
using namespace std;

int main(){
    char c;
    int isLowercaseVowel, isUppercaseVowel;
    cout<<"Please enter a character"<<endl;
    cin>>c;

    isLowercaseVowel = (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');

    isUppercaseVowel = (c=='A' || c=='E' || c=='I' || c=='O' || c=='U');

    if(isLowercaseVowel||isUppercaseVowel){
        cout<<"The given char "<<c<<" is a vowel"<<endl;
    }
    else{
        cout<<"The given char "<<c<<" is a consonant"<<endl;
    }


    return 0;
}