#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int n, i;
    cout << "Enter a number" << endl;
    cin >> n;

    // Method-1(Self)

    // for(i=2;i<n;i++){
    //     if(n%i==0){
    //         cout<<"The entered number "<<n<<" is not prime number as it is divisible by "<<i<<endl;
    //         break;
    //     }
    // }
    // if(i==n){
    // cout<<"The entered number "<<n<<" is a prime number"<<endl;
    // }

    // --------------------------------------------------------------------------------------------------

    // Method-2

    bool flag = 0;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "\nThe entered number " << n << " is not a prime number!!" << endl;
            flag = 1;
            break;
        }

        // The below code doesn't work for i=2 and i=3

        // if (flag == 0)
        // {
        //     cout << "\nThe entered number " << n << " is a prime number!!" << endl;
        // }
    }

    if (flag == 0)
    {
        cout << "\nThe entered number " << n << " is a prime number!!" << endl;
    }

    return 0;
}
