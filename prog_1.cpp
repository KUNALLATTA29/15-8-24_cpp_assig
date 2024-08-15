#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr = {35, 45, 70, 80, 90, 28, 66, 49, 53, 52, 57, 78};
    map<string,vector<int>> mymap;
    
    for(auto it:arr){
        if(it>65){
            mymap["Obesity"].push_back(it);
        }else if(45<= it && it <= 65){
            mymap["Healthy"].push_back(it);
        }else{
            mymap["Ricket"].push_back(it);
        }
    }
    for(auto it:mymap){
        cout<<it.first<<" : ";
        for(auto k:it.second){
            cout<<k<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}