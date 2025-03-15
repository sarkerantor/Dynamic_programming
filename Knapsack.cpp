#include<bits/stdc++.h>
using namespace std;
vector<int>wt,prft;
vector<vector<int>>dp;
int knapsack(int n,int m){
    if(m==0||n==0)return 0;
    if(dp[n][m]!=-1)return dp[n][m];
    if(wt[n-1]>m){
        return dp[n][m]=knapsack(n-1,m);
    }
    return dp[n][m]=max(knapsack(n-1,m),knapsack(n-1,m-wt[n-1])+prft[n-1]);
}
int main(){
    //freopen("input.txt","r",stdin);
    int n,m;
    cin>>n;
    wt.resize(n);
    prft.resize(n);
    for(int i=0;i<n;i++)cin>>wt[i];
    for(int i=0;i<n;i++)cin>>prft[i];
    cin>>m;
    dp.assign(n+1,vector<int>(m+1,-1));
    cout<<knapsack(n,m)<<endl;
    return 0;
}
/*
Input:
3
30 15 45
100 60 150
50
*/
