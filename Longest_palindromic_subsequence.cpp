#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>dp;
int ans(const string &str,int i,int j){
    if(i>j)return 0;
    if(i==j)return 1;
    if(dp[i][j]!=-1)return dp[i][j];
    if(str[i]==str[j])dp[i][j]=2+ans(str,i+1,j-1);
    else dp[i][j]=max(ans(str,i+1,j),ans(str,i,j-1));
    return dp[i][j];
}
int lps(const string &str){
    int n=str.size();
    dp.assign(n,vector<int>(n,-1));
    return ans(str,0,n-1);
}
int main(){
    string str="xyzxzy";
    cout<<lps(str)<<endl;
    return 0;
}
