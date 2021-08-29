#include<iostream>
using namespace std;
int main()
{
	
	int n, sum;
	cin>>n;

    for(int i=0;i<=n;i++){
        sum = sum + i;

    }
    cout<<"The sum of the natural number till "<<n<<" is: "<<sum<<endl;  
	return 0;
}
