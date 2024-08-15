
#include <bits/stdc++.h>
using namespace std;


int main(){
    
    set<int> arr;
    arr.insert(10);
    arr.insert(20);
    arr.insert(20);
    arr.insert(30);
    arr.insert(40);
    arr.insert(40);
    arr.insert(50);
    
    for(auto it:arr){
        cout<<it<<" ";
    }
    
    return 0;
    
}