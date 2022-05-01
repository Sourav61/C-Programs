#include<iostream>
using namespace std;

int main(){

    char button;    
    cout<<"Enter any character"<<endl;
    cin>>button;

    switch (button)
    {
    case 'a':
        cout<<"Hello"<<endl;
        break;
    
    case 'b':
        cout<<"Gracias"<<endl;
        break;

    case 'c':
        cout<<"Hola"<<endl;
        break;

    case 'd':
        cout<<"Hi"<<endl;
        break;

    case 'e':
        cout<<"Namaste"<<endl;
        break;    

    default:
        cout<<"I am still trying to learn more!!";
        break;
    }
}