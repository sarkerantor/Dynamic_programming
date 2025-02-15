#include<bits/stdc++.h>
using namespace std;
int movecount=0;
void towerofhanoi(int n,const string& src,const string& helper,const string& dest){
    if(n==1){
        cout<<"Transfer disk "<<n<<" from "<<src<<" to "<<dest<<endl;
        movecount++;
        return;
    }
    towerofhanoi(n-1,src,dest,helper);
    cout<<"Transfer disk "<<n<<" from "<<src<<" to "<<dest<<endl;
    movecount++;
    towerofhanoi(n-1,helper,src,dest);
}   
int main(){
    int n=3;
    towerofhanoi(n,"S","H","D");
    cout<<movecount<<endl;
    return 0;
}
