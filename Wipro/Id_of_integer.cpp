#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n,rem=0,sum=0;
    cin>>n;

    while(n!=0){
        rem = n%10;
        if(rem%2 == 0) rem++; else rem--;
        sum= sum*10 + rem;
        n=n/10;
    }

    n=sum,rem=0,sum=0;
    while(n!=0){
        rem = n%10;
        sum= sum*10 + rem;
        n=n/10;
    }
    cout<<sum;
    return 0;
}

