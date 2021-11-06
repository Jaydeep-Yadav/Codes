#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class comp{
    int a,b;
    public:
    comp(){
        a=0;
        b=0;
    }
    comp(int a,int b){
        this->a=a;
        this->b=b;
    }
    void sum(comp c1,comp c2){
        a=c1.a+c2.a;
        b=c1.b+c2.b;
    }
    void display(){
        cout<<a<<"+"<<b<<"i"<<endl;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout);
    #endif
    comp c1(1,2),c2(3,4);
    comp c3;
    c3.sum(c1,c2);
    c3.display();

    return 0;
}
