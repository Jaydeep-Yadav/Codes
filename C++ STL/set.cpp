#include <iostream>
#include <set>

//? Set - Includes only unique elements i.e. single value for multiple occurrence
//? outputs in sorted increasing order
using namespace std;
int main()
{
    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(5);
    s.insert(4);
    s.insert(3);
    s.insert(1);
    s.insert(3);
    s.insert(8);

    for(auto i:s) cout<<i<<" ";

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    cout<<endl;
    for(auto i:s) cout<<i<<" ";

    cout<<"\nif element is present "<<s.count(5);
    cout<<"\nif element is present "<<s.count(-9)<<endl;

    set<int>::iterator itr = s.find(5);
    for(auto it=itr;it!=s.end();it++) cout<<*it<<" ";
    cout<<endl;

    return 0;
}