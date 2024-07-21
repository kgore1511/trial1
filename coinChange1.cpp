#include<bits/stdc++.h>
using namespace std;

int getMinSum(int n,int sum,int coins[]){
    if(n==0) return INT_MAX;
    if(sum==0) return 0;
    if(coins[n-1]>sum) return getMinSum(n-1,sum,coins);
    else{
        hello ji
        return min(getMinSum(n-1,sum,coins),1+getMinSum(n,sum-coins[n-1],coins));
    }
}

//min no. of coins to me sum 
int main()
{
    int n,sum;
    cin>>n;
    cin>>sum;
    int coins[n];
    for(int x=0;x<n;x++) cin>>coins[x];
    cout<<getMinSum(n,sum,coins);
    return 0;
}
