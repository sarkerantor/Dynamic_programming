#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,7};
    set<int>dp;
    dp.insert(0);
    for(int num:v){
        set<int>us=dp;
        for(int sum:dp){
            us.insert(sum+num);
        }
        dp=us;
    }
    dp.erase(0);
    for(auto it:dp)cout<<it<<" ";
    return 0;
}
