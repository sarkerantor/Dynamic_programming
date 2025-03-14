#include<bits/stdc++.h>
using namespace std;
int editdist(string &ftr,string &str,int m,int n,vector<vector<int>>&dp){
    if(m==0)return n;
    if(n==0)return m;
    if(dp[m][n]!=-1)return dp[m][n];
    if(ftr[m-1]==str[n-1]){
        return dp[m][n]=editdist(ftr,str,m-1,n-1,dp);
    }
    return dp[m][n]=1+min({editdist(ftr,str,m-1,n-1,dp),
                            editdist(ftr,str,m,n-1,dp),
                            editdist(ftr,str,m-1,n,dp)});
}
int main()
{
    string ftr="sunday",str="saturday";
    int m=ftr.size(),n=str.size();
    vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
    cout<<editdist(ftr,str,m,n,dp);
    return 0;
}
