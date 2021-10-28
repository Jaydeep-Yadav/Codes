#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<"\nsearch present "<<binary_search(v.begin(),v.end(),6);  
    //?return true

    //?Lower Bound
    cout<<"\nLower Bound "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    //?Upper Bound
    cout<<"\nUpper Bound "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    cout<<"\nmax and min is "<<max(2,4)<<" and "<<min(2,4)<<endl;
    int a=10,b=34;
    swap(a,b);
    string str ="jerry";
    reverse(str.begin(),str.end());
    cout<<str;

    rotate(v.begin(),v.begin()+1,v.end());  //? begin,time to rotate n,end

    cout<<"\nAfter rotate\n ";
    for(int i:v) cout<<i<<" "; 

    //? Sort using introsort i.e combination of quick sort,heap sort and insertion sort
    sort(v.begin(),v.end());
    cout<<endl;
    for(int i:v) cout<<i<<" "; 
    return 0;
}
