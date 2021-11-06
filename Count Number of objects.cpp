#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class countObjects{
    int a;
    static int count;
    public:
    countObjects(int a){
        count++;
         this->a = a;
    }
    void get(){
        cout<<a<<endl;
        cout<<"Object#"<<count<<endl;
    }

};
int countObjects::count;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout);
    #endif
    countObjects obj1(4);
    obj1.get();

    countObjects obj2(10);
    obj2.get();
    
    countObjects obj3(34);
    obj3.get();
    
    return 0;
}
