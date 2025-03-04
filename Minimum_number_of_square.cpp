#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2,m=1e7;
int dp[N];
int minsquare(int n){
    if(n<=3)return n;
    if(dp[n]!=m)return dp[n];
    for(int i=1;i<=sqrt(n);i++){
        dp[n]=min(dp[n],1+minsquare(n-i*i));
    }
    return dp[n];
}
int main(){
    for(int i=0;i<=N;i++)dp[i]=m;
    int n;
    cin>>n;
    cout<<minsquare(n)<<endl;
    return 0;
}
