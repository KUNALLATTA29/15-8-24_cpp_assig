
#include <bits/stdc++.h>
using namespace std;

vector<int> sol(vector<int> &arr, int &target){
    map<int,int> mymap;
    for(int i=0;i<arr.size();i++){
        int ans = target -arr[i];
        if(mymap.find(ans) != mymap.end()){
            return {mymap[ans],i};
        }
        
        mymap[arr[i]] = i;
    }
    return {};
    
}
int main(){

    vector<int> arr = {1,2,3,4,5,6,7,8};
    int target = 9;
    vector<int> ans = sol(arr,target);
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
    
}