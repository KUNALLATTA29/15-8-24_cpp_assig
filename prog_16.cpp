
#include <bits/stdc++.h>
using namespace std;


int main(){
    
    vector<int> arr1 = {1,2,3,4,5};
    vector<int> arr2 = {4,5,6,7,8};
    vector<int> arr3 = {4,5,10,11,12,7};
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    sort(arr3.begin(), arr3.end());
    vector<int> ans1;
    vector<int> ans2;
    set_intersection(arr1.begin(),arr1.end(),arr2.begin(),arr2.end(),back_inserter(ans1));
    
    set_intersection(ans1.begin(),ans1.end(),arr3.begin(),arr3.end(),back_inserter(ans2));
    
    
    
    for(auto it:ans2){
        cout<<it<<" ";
    }
    

    return 0;
    
}