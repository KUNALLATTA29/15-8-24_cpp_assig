
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1,2,3,4,5,1,2,3,4,5,6};
    map<int,int> mymap;
    for(auto it:arr){
        mymap[it]++;
    }
    for(auto it:mymap){
        cout<<it.first<<" : "<<it.second<<endl;
    }
    return 0;
}