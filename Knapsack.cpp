#include<bits/stdc++.h>
using namespace std;
const int N=1e3+2;
int prft[N],wt[N];
int dp[N][N];
int knapsack(int n,int w){
    if(n<=0 || w<=0)return 0;
    if(dp[n][w]!=-1)return dp[n][w];
    if(wt[n-1]>w)return dp[n][w]=knapsack(n-1,w);
    else return dp[n][w]=max(knapsack(n-1,w),knapsack(n-1,w-wt[n-1])+prft[n-1]);
}
int main(){
    freopen("input.txt","r",stdin);
    int n,w;
    cin>>n;
    for(int i=0;i<n;i++)cin>>wt[i];
    for(int i=0;i<n;i++)cin>>prft[i];
    cin>>w;
    memset(dp,-1,sizeof(dp));
    cout<<knapsack(n,w)<<endl;
    return 0;
}
/*
Input:
3
30 15 45
100 60 150
50
*/
