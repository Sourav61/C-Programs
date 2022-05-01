#include<iostream>
using namespace std;

int main(){

    char operate;

    char op;
    cout<<"Enter the type of Operation you want to perform"<<endl;
    cin>>op;

    switch (op)
    {
        case '1':
            int a,b;
            cout<<"Enter any two numbers to operate"<<endl;
            cin>>a>>b;
            cout<<"Enter any arithmetic operator"<<endl;
            cin>>operate;

            switch (operate)
            {
                case '+':
                    cout<<a+b;
                    break;

                case '-':
                    cout<<a-b;
                    break;

                case '*':
                    cout<<a*b;
                    break;

                case '/':
                    cout<<a/b;
                    break;

                case '%':
                    cout<<a%b;
                    break;

                default:
                    cout<<"Please enter a valid operator"<<endl;
                    break;
            }

            break;

        case '2':
            int c,d;
            cout<<"Enter any two numbers to operate"<<endl;
            cin>>c>>d;
            cout<<"Enter any assignment operator"<<endl;
            cin>>operate;

            switch (operate)
            {

                case '=':
                    c=d;
                    cout<<c<<" "<<d<<endl;
                    break;

                case '+':
                    c+=d;
                    cout<<c<<" "<<d<<endl;
                    break;

                case '-':
                    c-=d;
                    cout<<c<<" "<<d<<endl;
                    break;

                case '*':
                    c*=d;
                    cout<<c<<" "<<d<<endl;
                    break;

                case '/':
                    c/=d;
                    cout<<c<<" "<<d<<endl;
                    break;

                case '%':
                    c%=d;
                    cout<<c<<" "<<d<<endl;
                    break;

                default:
                    cout<<"Please enter a valid operator"<<endl;
                    break;

            }

            break;

        case '3':
            int number;
            cout<<"Choose any number on which you want to perform auto-increment or auto-decrement operator"<<endl;
            cin>>number;
            cout<<"Choose operator: auto-increment OR auto-decrement";
            cin>>operate;

            switch (operate)
            {

                case '+':
                    number++;
                    cout<<number<<endl;
                    break;

                case '-':
                    number--;
                    cout<<number<<endl;
                    break;

                default:
                    cout<<"Please enter a valid operator"<<endl;
                    break;
            }

            break;

        case '4':
            bool e,f;
            cout<<"Enter any two booleans to operate"<<endl;
            cin>>e>>f;

            cout<<"Enter any logical operator"<<endl;
            cin>>operate;

            switch (operate)
            {

                case '&':
                    cout<<e&&f;
                    break;

                case '|':
                    cout<<e||f;
                    break;

                case '!':
                    cout<<!e<<" "<<!f;
                    break;

                default:
                    cout<<"Please enter a valid operator"<<endl;
                    break;

            }

            break;

        case '5':
            int g,h;
            cout<<"Enter any two numbers to operate"<<endl;
            cin>>g>>h;

            cout<<"Enter any relational operator"<<endl;
            cin>>operate;

            switch (operate)
            {

                case 'a':
                    cout<<(g==h);
                    break;

                case 'b':
                    cout<<(g!=h);
                    break;

                case 'c':
                    cout<<(g>h);
                    break;

                case 'd':
                    cout<<(g<h);
                    break;

                case 'e':    
                    cout<<(g>=h);
                    break;

                case 'f':    
                    cout<<(g<=h);
                    break;

                default:
                    cout<<"Please enter a valid operator"<<endl;
                    break;

            }

            break;

        case '6':
            int i,j,re;
            cout<<"Enter any two numbers to operate"<<endl;
            cin>>i>>j;
            cout<<"Enter any bitwise operator"<<endl;
            cin>>operate;

            switch (operate)
            {

                case 'a':
                    re = i & j;
                    cout<<"i & j "<<re<<endl;
                    break;

                case 'b':
                    re = i | j;
                    cout<<"i | j: "<<re<<endl;
                    
                    break;

                case 'c':
                    re = i ^ j;
                    cout<<"i ^ j: "<<re<<endl;
                    break;

                case 'd':
                    cout<<"~i: "<<~i<<"  ~j: "<<~j<<endl;
                    break;

                case 'e':
                    re = i << j;
                    cout<<"i << j: "<<re;
                    break;

                case 'f':    
                    re = i >> j;
                    cout<<"i >> j: "<<re;
                    break;

                default:
                    cout<<"Please enter a valid operator"<<endl;
                    break;

            }

            break;
        
        case '7':
            int k,l,m,n,o;
            cout<<"Enter any third number to compare"<<endl;
            cin>>m;
            k=m;
            cout<<"Enter any two numbers to assign"<<endl;
            cin>>n>>o;

            cout<<"Enter the case of Ternary Operator"<<endl;
            cin>>operate;

            

            switch (operate)
            {
                
                case '1':

                    l = (k!=m) ? n:o;
                    cout<<l;
                    break;

                case '2':

                    l = (k==m) ? n:o;
                    cout<<l;
                    break;

                default:
                    cout<<"Please enter a valid operator"<<endl;
                    break;

            }
            break;    
    }  
}