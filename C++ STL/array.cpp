#include<iostream>
#include<array>

//? Array is static array

using namespace std;
int main(){
    array<int,4> arr = {1,3,2,4};
    int size = arr.size();

    for (int i = 0; i < size; i++) cout<<arr[i]<<" ";

    //Direct Random Access
    cout<<"\nElement at 2nd index is "<<arr.at(2);

    cout<<"\nEmpty or not "<<arr.empty();

    cout<<"\nFirst Element "<<arr.front();

    cout<<"\nLast Element "<<arr.back();

    return 0;
}