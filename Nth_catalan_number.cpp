#include<bits/stdc++.h>
using namespace std;
/*
Bionomial Coefficient:1/(n+1)*nCr(2n,n)  // O(n) time complexity
*/
int bionomialcoeff(int n,int k){
    if(k>n-k)k=n-k;
    int res=1;
    for(int i=0;i<k;i++){
        res*=(n-i);
        res/=(i+1);
    }
    return res;
}
int findcatalan(int n){
    int c=bionomialcoeff(2*n,n);
    return c/(n+1);
}
int main(){
    int n=6;
    int res=findcatalan(n);
    cout<<res;
    return 0;
}
