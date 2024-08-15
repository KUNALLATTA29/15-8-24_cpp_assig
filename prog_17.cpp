
#include <bits/stdc++.h>
using namespace std;

void sol(vector<int> &arr){
    
    set<int> myset(arr.begin(),arr.end());
    arr.assign(myset.begin(),myset.end());
}

int main(){
    
    vector<int> arr1 = {1,2,5,4,5};
    vector<int> arr2 = {5,6,7,8,6};
    vector<int> arr3 = {9,10,13,12,13};
    vector<int> arr4 = {18,15,16,17,18};
    
    sol(arr1);
    sol(arr2);
    sol(arr3);
    sol(arr4);
    
    for(auto it:arr1){
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it:arr2){
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it:arr3){
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it:arr4){
        cout<<it<<" ";
    }
    cout<<endl;
    

    return 0;
    
}