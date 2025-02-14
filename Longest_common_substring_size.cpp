#include<bits/stdc++.h>
using namespace std;
int lcs(const string& ftr,const string& str){
    int maxlen=0;
    int n=ftr.length(),m=str.length();
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(ftr[i-1]==str[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
                maxlen=max(maxlen,dp[i][j]);
            }
            else dp[i][j]=0;
        }
    }
    return maxlen;
}
int main(){
    //freopen("input.txt","r",stdin);
    string ftr="geeksforgeek",str="geeksquiz";
    int maxlen=lcs(ftr,str);
    cout<<maxlen<<endl;
    return 0;
}
