#include<bits/stdc++.h>
typedef unsigned long long int ll;

using namespace std;

void insertionSort(int arr[], int n)
{
	int i, key, j;

    //? Assume first element is sorted, hence loops runs from second element

	for (i = 1; i < n; i++)
	{
		key = arr[i]; //? Save present (second) element as key
		j = i - 1; //?Set J to previous element index

		while (j >= 0 && arr[j] > key) //?comapring prev element and present element
		{
			arr[j + 1] = arr[j]; //?Copy element of previous index to present index
			j = j - 1; //?decrement j till j= -1
		}
		arr[j + 1] = key; //?restore saved element in key variable to previous index
	}
}

void printArray(int arr[], int n){

	for (int i = 0; i < n; i++) cout << arr[i] << " ";
	cout << endl;

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

    insertionSort(arr, n);
	printArray(arr, n);

    return 0;
}