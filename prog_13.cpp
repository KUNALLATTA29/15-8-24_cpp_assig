
#include <bits/stdc++.h>
using namespace std;


int main(){
    
    set<int> arr1;
    set<int> arr2;
    arr1.insert(1);
    arr1.insert(2);
    arr1.insert(5);
    arr1.insert(4);
    arr1.insert(3);
    arr2.insert(4);
    arr2.insert(5);
    arr2.insert(6);
    arr2.insert(7);
    arr2.insert(8);
    vector<int> ans1;
    vector<int> ans2;
    set_union(arr1.begin(),arr1.end(),arr2.begin(),arr2.end(),back_inserter(ans1));
    set_intersection(arr1.begin(),arr1.end(),arr2.begin(),arr2.end(),back_inserter(ans2));
    
    for(auto it:ans1){
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it:ans2){
        cout<<it<<" ";
    }

    return 0;
    
}