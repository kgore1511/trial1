#include<bits/stdc++.h>
using namespace std;

int knapsack(int n,int maxWt,int wt[],int val[]){
    if(n==0 || maxWt==0) return 0;
    if(wt[n-1]>maxWt) return knapsack(n-1,maxWt,wt,val);
    else{
        return max(knapsack(n-1,maxWt,wt,val),val[n-1]+knapsack(n-1,maxWt-wt[n-1],wt,val));
    }
    }

int main()
{
    int n,maxWt;
    cin>>n;
    cin>>maxWt;
    int wt[n],val[n];
    for(int x=0;x<n;x++) cin>>wt[x];
    for(int x=0;x<n;x++) cin>>val[x];
    cout<<knapsack(n,maxWt,wt,val);
    return 0;
}