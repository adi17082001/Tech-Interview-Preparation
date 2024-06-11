#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
	for(int i = n-1; i >= 0; i--){
		int didSwap = 0;
		for(int j = 0; j <= i-1; j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j], arr[j+1]);
				didSwap = 1; // swapped
			}
		}
		if(didSwap == 0){
			break;
		}
	}
}


int main(){
	int arr[7] = {4,2,3,1,5,8,10};
	bubbleSort(arr,7);
	for(int i = 0; i < 7; i++){
		cout<<arr[i]<<" ";
	}
}
