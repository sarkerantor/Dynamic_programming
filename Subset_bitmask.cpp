#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int>arr={1,2,3};
    vector<vector<int>>ans;
    int n=arr.size();
    int p=pow(2,n);
    for(int i=0;i<p;i++){
        vector<int>subset;
        for(int j=0;j<n;j++){
            if(i&(1<<j))subset.push_back(arr[j]);
        }
        ans.push_back(subset);
    }
    for(auto it:ans){
        for(int i:it){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
