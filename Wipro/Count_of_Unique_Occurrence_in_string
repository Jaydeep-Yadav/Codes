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
    string str;
    cin>>str;
    int hash[256] = {0} , i=0;
    while(str[i]!= '\0'){
        hash[str[i]]++;
        i++;
    }

    int sum=0,size= sizeof(hash)/sizeof(hash[0]);

    for(int i=0;i<size;i++){
        if(hash[i] == 1) sum++;
    }
    cout<<sum;
    return 0;
}
