#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<string> arr = {"listen", "silent", "enlist", "inlets", "rat", "tar", "art", "cat", "act", "tac"};
    map<string,vector<string>> mymap;
    for(auto it:arr){
        string s = it;
        sort(s.begin(),s.end());
        mymap[s].push_back(it);
    }
    for(auto it:mymap){
        for(auto k:it.second){
            cout<<k<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}