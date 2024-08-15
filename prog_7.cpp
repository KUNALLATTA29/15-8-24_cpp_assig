
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    map<string,int> mymap;
    stringstream ss(s);
    string word;
    
    while(ss >> word){
        mymap[word]++;
    }
    for(auto it:mymap){
        cout<<it.first<<" : "<<it.second<<endl;
    }
    return 0;
}