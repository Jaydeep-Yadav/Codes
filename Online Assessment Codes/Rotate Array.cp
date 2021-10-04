#include <iostream>
typedef unsigned long long int ll;
using namespace std;

void leftRotate(int arr[], int size, int n){
   while (n != 0){
      int first = arr[0];
      for (int i = 0; i < size - 1; i++)
         arr[i] = arr[i + 1];
      arr[size - 1] = first;
      n--;
   }
}

void rightRotate(int arr[], int size, int n){
  leftRotate(arr,size,size-n);
}

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif

   int arr[] = {1, 2, 3, 4, 5};
   int size = sizeof(arr) / sizeof(arr[0]);
  
  //Rotating Array clockwise twice
   rightRotate(arr,size,2);
   for (int i = 0; i < size; i++)
      cout << arr[i] << " ";
   return 0;
}
