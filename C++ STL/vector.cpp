#include<iostream>
#include<vector>

//? Vector is static array

using namespace std;
int main(){
    vector<int> v;

    vector<int> a(5,1); //?capacity is 5 and elements are initialized to 1;
    cout<<"Vector a "<<endl;
    for(int i:a) cout<<i<<" ";
    
    
    cout<<endl<<"Vector last "<<endl;

    vector<int> last(a);
    for(int i:a) cout<<i<<" ";



    cout<<"\nCapacity is "<<v.capacity();
    v.push_back(11);
    cout<<"\nCapacity is "<<v.capacity();
    v.push_back(52);
    cout<<"\nCapacity is "<<v.capacity();

    //! vector size doubles here
    v.push_back(98);
    cout<<"\nCapacity is "<<v.capacity();
    
    cout<<"\nSize is "<<v.size();

    cout<<"\nFirst Element "<<v.front();

    cout<<"\nLast Element "<<v.back();

    
    cout<<"\nBefore pop\n";
    for(int i:v) cout<<i<<" ";

    v.pop_back();

    cout<<"\nAfter pop\n";
    for(int i:v) cout<<i<<" ";

    //? Empty vector, size become zero but capacity remains same
    cout<<"\nBefore clear "<<v.size();
    v.clear();
    cout<<"\nAfter clear "<<v.size();

    return 0;
}