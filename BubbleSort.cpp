#include<bits/stdc++.h>
typedef unsigned long long int ll;

using namespace std;

void bubble(int *arr,int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1]){
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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
    int arr[10];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bubble(arr,n);

     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}


