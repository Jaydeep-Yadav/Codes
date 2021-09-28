#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int sum(int n){
    int ans=0;
    while(n!=0){
        ans = ans + n%10;
        n=n/10;
    }
    return ans;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n,ans;
    cin>>n;
    ans = sum(n);
    if(ans>26) ans= sum(ans);

    cout<<(char(64+ans));

    return 0;
}

