#include<bits/stdc++.h>
using namespace std;
int minsquare(int n,vector<int>&dp){
    if(n==0)return 0;
    if(dp[n]!=-1)return dp[n];
    int ans=INT_MAX;
    for(int i=1;i*i<=n;i++)ans=min(ans,1+minsquare(n-i*i,dp));
    return dp[n]=ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    cout<<"Minimum square is : "<<minsquare(n,dp)<<endl;
}
