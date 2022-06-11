#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number of elements in the array: "<<endl;
    cin>>n;

    int k;
    cout<<"Enter the maximum no. of 0s allowed to be turned to 1: "<<endl;
    cin>>k;

    vector<int> a(n);

    for(auto &i : a){
        cin>>i;
    }
    int zeroCnt = 0, ans = 0, i = 0;

    for(int j=0;j<n;j++){
        if(a[j] == 0)
            zeroCnt++;

        while(zeroCnt > k){
            if(a[i] == 0){
                zeroCnt--;
            }
            i++;
        }
        // zeroCnt <= k

        ans = max(ans, j-i+1);
    }

    cout<<ans<<endl;

    return 0;
}