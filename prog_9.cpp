
#include <bits/stdc++.h>
using namespace std;


int main(){
    set<int> arr;
    arr.insert(5);
    arr.insert(10);
    arr.insert(15);
    arr.insert(20);
    arr.insert(25);
    
    for(auto it:arr){
        cout<<it<<" ";
    }
    
    return 0;
    
}