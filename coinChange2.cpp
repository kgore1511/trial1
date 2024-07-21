#include<bits/stdc++.h>
using namespace std;

int minWays(int n,int maxSum,int coins[]){
   if(n==0) return 0;
   if(maxSum==0) return 1;
   if(coins[n-1]>maxSum) return minWays(n-1,maxSum,coins);
   return minWays(n-1,maxSum,coins)+minWays(n,maxSum-coins[n-1],coins);
}
njhdfbvjhdfv

// find max ways with different denominations
int main()
{
    int n,maxSum;
    cin>>n;
    cin>>maxSum;
    int coins[n];
    for(int x=0;x<n;x++) cin>>coins[x];
    cout<<minWays(n,maxSum,coins);
    return 0;
}