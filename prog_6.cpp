
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1,2,3,4,5,1,2,3,4,5,6,1,1,3,4};
    int thres = 2;
    map<int,int> mymap;
    for(auto it:arr){
        mymap[it]++;
    }
    
    for(auto it:mymap){
        if(it.second>thres){
            cout<<it.first<<" ";
        }
    }
    return 0;
}