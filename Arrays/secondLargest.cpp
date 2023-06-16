#include<bits/stdc++.h>
using namespace std;

int getLargestElement(int arr[], int n){
	int res = 0;
	for(int i=1;i<n;i++){
		if(arr[i]>arr[res]){
			res = i;
		}
	}
	return res;
}


// Naive approach:

int secondLargest(int arr[], int n){
	int largest = getLargestElement(arr,n);
	int res = -1;

	for(int i=0;i<n;i++){
		if(arr[i]!=arr[largest]){
			if(res==-1){
				res = i;
			}
			else if(arr[i]>arr[res]){
				res = i;
			}
		}
	}
	return res;
}

//Efficient approach:

int getSecondLargest(int arr[], int n){
	int res = -1, largest = 0;
	for(int i=1;i<n;i++){
		if(arr[i]>arr[largest]){
			res = largest;
			largest  = i;
		}
		else if(arr[i]<=arr[largest]){
			if(res== -1 || arr[i]>arr[res]){
				res = i;
			}
		}
	}
	return arr[res];
}


int main(){
	int arr[] = {1,2,3,4,5};
	cout<<getSecondLargest(arr,5);
}
