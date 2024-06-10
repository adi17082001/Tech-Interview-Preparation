#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
	for(int i = 0; i <= n-2; i++){
		int mini = i ;
		for(int j = i; j <= n-1; j++){   // remember j starts from i to n-1
			if(arr[j] < arr[mini]) mini = j;
		}
		swap(arr[mini], arr[i]);
	}
}



int main(){
	int arr[5] = {4,2,3,1,5};
	selectionSort(arr,5);
	for(int i = 0; i < 5; i++){
		cout<<arr[i]<<" ";
	}
}
