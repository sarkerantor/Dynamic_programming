#include<bits/stdc++.h>
using namespace std;
class Hashing{
    public:
    vector<list<int>>hashtable;
    int buckets;
    Hashing(int size){
        buckets=size;
        hashtable.resize(size);
    }
    int hashvalue(int key){
        return key%buckets;
    }
    void add(int key){
        int idx=hashvalue(key);
        hashtable[idx].push_back(key);
    }
    list<int>::iterator search(int key){
        int idx=hashvalue(key);
        return find(hashtable[idx].begin(),hashtable[idx].end(),key);
    }
    void deletekey(int key){
        int idx=hashvalue(key);
        if(search(key)!=hashtable[idx].end()){
            hashtable[idx].erase(search(key));
            cout<<key<<" is deleted."<<endl;
        }
        else cout<<"key is not present in the hashtable."<<endl;
    }
};
int main(){
    Hashing h(10);
    h.add(5);
    h.add(4);
    h.add(3);
    h.deletekey(3);
    return 0;
}
