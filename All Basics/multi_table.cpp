#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Input the number upto: "<<endl;
    cin>>n;

    cout<<"Multiplication table from 0 to "<<n<<" is: "<<endl;
    for (int i = 1; i <= 10; i++) 
    {
        for (int j = 1; j <= n; j++) 
        {
            if (j <= n - 1)
                cout << j << "x" << i << "=" << i * j<<"\t\t";
            else
                cout << j << "x" << i << "=" <<i * j<<"\t";
        }
        cout << endl;
    }
}
