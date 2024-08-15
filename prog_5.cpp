
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1,2,3,4,5,1,2,3,4,5,6,1,1};
    map<int,int> mymap;
    for(auto it:arr){
        mymap[it]++;
    }
    int maxi=0;
    int ele=0;
    for(auto it:mymap){
        if(it.second>maxi){
            maxi=it.second;
            ele = it.first;
        }
    }
    cout<<ele;
    return 0;
}