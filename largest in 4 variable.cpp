#include <iostream>
using namespace std;
int lg(int a,int b){
    if(a>=b) return a; else return b;
}

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<lg(lg(a,b),lg(c,d));
    return 0;
}
