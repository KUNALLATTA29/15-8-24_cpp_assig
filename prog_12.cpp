
#include <bits/stdc++.h>
using namespace std;


int main(){
    
    set<int> arr;
    arr.insert(1);
    arr.insert(3);
    arr.insert(5);
    arr.insert(7);
    arr.insert(9);
    
    
    for(auto it:arr){
        cout<<it<<" ";
    }

    return 0;
    
}