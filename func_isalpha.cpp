#include<iostream>
using namespace std;

bool is_alpha(char a){
    if(int(a)>96){
        cout<<"true";
    }else{
        cout<<"false";
    }

}

int main(){
    char a;
    cout<<"Enter the character to check whether a given character is an alphabet or not: "<<endl;
    cin>>a;

    if(is_alpha(a)=='true'){
        return 1;
    }else{
        return 0;
    }

    return 0;
}
