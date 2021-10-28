#include <iostream>
#include <map>

//? Set - Stores in key value pair
//? multiple key can point to same value but not vice versa
//? outputs in sorted increasing order, in ordered map

using namespace std;
int main()
{
    map<int,string> m;
    m[1] ="jay";
    m[2]="deep";
    m[13]="yadav";
    m[14]="killer";

    m.insert({5,"jerry"});
    for(auto i:m) cout<<i.first<<endl;
    for(auto i:m) cout<<i.second<<endl;

    cout<<"\nfinding 13 "<<m.count(13); //?is present

    cout<<"\nerasing"<<endl;
    m.erase(13);
    for(auto i:m) cout<<i.second<<endl;

    auto it = m.find(5);
    for(auto i=it;i!=m.end();i++) cout<<(*i).first<<" ";
    return 0;
}