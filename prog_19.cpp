
#include <bits/stdc++.h>
using namespace std;


int main(){
    
    set<int> arr1 = {1,2,3,4,5};
    set<int> arr2 = {4,5,6,7,8};
    set<int> arr3 = {7,8,9,10,11};
    
    vector<int> ans1;
    vector<int> ans2;
    
    set_symmetric_difference(arr1.begin(),arr1.end(),
    arr2.begin(),arr2.end(),back_inserter(ans1));
    set_symmetric_difference(ans1.begin(),ans1.end(),
    arr3.begin(),arr3.end(),back_inserter(ans2));
    
    
    for(auto it:ans2){
        cout<<it<<" ";
    }

    return 0;
    
}