
#include <bits/stdc++.h>
using namespace std;


int main(){
    
    set<int> arr;
    for(int i=1;i<=5;i++){
        arr.insert(i);
    }
    for(int i=1;i<=5;i++){
        if(arr.count(i)){
            cout<<i<<" is present in set."<<endl;
        }else{
            cout<<i<<" is not present in set."<<endl;
        }
    }

    return 0;
    
}