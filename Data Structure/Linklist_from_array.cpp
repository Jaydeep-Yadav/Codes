#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

struct node {
    int data;
    struct node *next;
}*first = NULL;

void create(int A[],int n){

    first = new node;
    first->data = A[0];
    first->next =NULL;

    struct node *item,*last;
    last = first;
    for(int i=1;i<n;i++){
        item = new node;
        item->data = A[i];
        item->next=NULL;
        last->next = item;
        last = item;
    }

}

void display(struct node *first){
    while(first!=0){
        cout<<first->data<<" ";
        first=first->next;
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
    int A[n];
    for(int i=0;i<n;i++) cin>>A[i];
    create(A,n);
    display(first);
    return 0;
}

