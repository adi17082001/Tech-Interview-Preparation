#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
	for(int i = 0; i <= n-1; i++){
		int j = i;
		while(j > 0 && (arr[j-1] > arr[j])){
			swap(arr[j-1], arr[j]);
			j--;
		}
	}
}

int main(){
	int arr[7] = {7,6,5,4,3,2,1};
	insertionSort(arr,7);
	for(int i = 0; i < 7; i++){
		cout<<arr[i]<<" ";
	}
}
