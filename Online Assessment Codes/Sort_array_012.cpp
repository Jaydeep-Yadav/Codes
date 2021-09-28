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

   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++) cin>>arr[i];

    for(int i=0;i<n;i++){

        if(arr[i]<0 || arr[i]>2) {
            cout<<"wrong input";
            return 0;
        }
        
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]) swap(arr[i],arr[j]);
        }
    }

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

}
