#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    int n;
    cin>>n;
    vector<int>v(n),dp(n,1);
    for(int i=0;i<n;i++)cin>>v[i];
    int ans=0;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(v[i]>v[j])dp[i]=max(dp[i],1+dp[j]);
        }
        ans=max(ans,dp[i]);
    }
    cout<<ans;
    return 0;
}
/*
Input:
9
10 22 9 33 21 50 52 60 80
*/
