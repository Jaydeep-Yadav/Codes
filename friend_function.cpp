#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class sample{
    int a;
    public:
    sample(){
        a=0;
    }
    sample(int a){
        this->a=a;
    }

    friend sample sum1(sample s1,sample s2);
    void print(){
        cout<<a<<endl;
    }
};

sample sum1(sample s1,sample s2){
    sample s3;
    return s1.a+s2.a;
    return s3;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout);
    #endif
    sample s1(10),s2(20);
    sample s3=sum1(s1,s2);
    s3.print();

    return 0;
}
