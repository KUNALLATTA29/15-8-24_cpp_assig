
#include <bits/stdc++.h>
using namespace std;


int main(){
    
    vector<int> arr1 = {1,2,3,4,5};
    vector<int> arr2 = {4,5,6,7,8};
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    vector<int> ans;
    set_intersection(arr1.begin(),arr1.end(),arr2.begin(),arr2.end(),back_inserter(ans));
    
    for(auto it:ans){
        arr1.erase(remove(arr1.begin(),arr1.end(),it),arr1.end());
        arr2.erase(remove(arr2.begin(),arr2.end(),it),arr2.end());
    }
    
    for(auto it:arr1){
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it:arr2){
        cout<<it<<" ";
    }
    

    return 0;
    
}