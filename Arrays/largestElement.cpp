#include<bits/stdc++.h>
using namespace std;


int largest(vector<int>&arr){
	int n = arr.size();
	// brute force
	// sort the array and print arr[n-1];
	// mergeSort(arr,0,n-1);
	// return arr[n-1];
	// it takes O(NlogN);

	// better
	int largest = arr[0];
	for(int i = 1; i < n; i++){
		if(arr[i] > largest){
			largest = arr[i] ;
		}
	}
	return largest;
}

int main(){
	vector<int>arr = {1,2,3,4,5};
	cout<<largest(arr);
}



