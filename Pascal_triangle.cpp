#include<bits/stdc++.h>
using namespace std;
int bionomialcoeff(int n,int k){
    if(k>n-k)k=n-k;
    int res=1;
    for(int i=0;i<k;i++){
        res*=(n-i);
        res/=(i+1);
    }
    return res;
}
void printpascal(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<bionomialcoeff(i,j)<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n=6;
    printpascal(n);
    return 0;
}
