#include<iostream>
using namespace std;
int main()
{
	
	int a,b,c;
	cin>>a>>b>>c;

	if(a>b){
		if(a>c){
			cout<<"The largest no. is "<<a<<endl;
		}
		else{
			cout<<"The largest no. is "<<c<<endl;
		}
	}

	else{
		if(b>c){
			cout<<"The largest no. is "<<b<<endl;
		}
		else{
			cout<<"The largest no. is "<<c<<endl;
		}
	}

	return 0;
}
