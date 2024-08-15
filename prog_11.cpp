
#include <bits/stdc++.h>
using namespace std;


int main(){
    
    set<int> arr;
    arr.insert(2);
    arr.insert(4);
    arr.insert(6);
    arr.insert(8);
    arr.insert(10);
    cout<<"before operation"<<endl;
    
    for(auto it:arr){
        cout<<it<<" ";
    }
    cout<<endl;
    
    if(arr.find(6) != arr.end()){
        arr.erase(6);
    }
    cout<<"after operation"<<endl;
    
    for(auto it:arr){
        cout<<it<<" ";
    }

    return 0;
    
}