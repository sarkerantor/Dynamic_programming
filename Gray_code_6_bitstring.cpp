#include<bits/stdc++.h>
using namespace std;
vector<string>generategraycode(int n){
    vector<string>result;
    int total=1<<n;
    for(int i=0;i<total;i++){
        int gray=i^(i>>1);
        string binary="";
        for(int j=n-1;j>=0;j--){
            binary+=(gray&(1<<j))?'1':'0';
        }
        result.push_back(binary);
    }
    return result;
}
int main(){
    int n=6;
    vector<string>graycode=generategraycode(n);
    for(const string& code : graycode){
        cout<<code<<endl;
    }
    return 0;
}
