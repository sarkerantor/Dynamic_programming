#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    int n;
    cin>>n;
    vector<vector<int>>v(n,vector<int>(n,0));
    vector<vector<int>>sum(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    sum[0][0]=v[0][0];
    for(int i=1;i<n;i++)sum[i][0]=sum[i-1][0]+v[i][0];
    for(int i=1;i<n;i++)sum[0][i]=sum[0][i-1]+v[0][i];
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            sum[i][j]=max(sum[i-1][j],sum[i][j-1])+v[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
/*
Input:
5
3 7 9 2 7
9 8 3 5 5
1 7 9 8 5
3 8 6 4 10
6 3 9 7 8
*/
