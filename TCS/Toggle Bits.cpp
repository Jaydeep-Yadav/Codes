#include<bits/stdc++.h>
typedef unsigned long long int ll;


/*
?input : +ve integer n; 1<=n<=100
!operation : Convert Decimal to binary and toggle all the bits
?output : Print +ve integer after toggling
 */
using namespace std;

void toggle(int &n){
    int temp =1;

    while(temp<=n){
        n = n^temp;
        temp = temp<<1;
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
   int n;
   cin>>n;
   if(n<=100 && n>=1) {
    toggle(n);
    cout<<n;
   }
   else cout<<"wrong input";

    return 0;
}
