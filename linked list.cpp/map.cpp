#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string>m;
    m[1]="abc";
    m[2]="def";
    m[3]="efg";
    m.insert({4,"jkl"});
    // map<int,string>:: iterator it;
    // for(it=m.begin();it!=m.end();++it)
    // cout<<(*it).first<<" "<<(*it).second;
   
   for(auto &pr:m){
       cout<<pr.first<<" "<<pr.second;
   }

}