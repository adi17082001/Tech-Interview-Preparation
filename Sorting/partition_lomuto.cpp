// Lomuto Partition.
// Here, we assume the last element as pivot

#include<bits/stdc++.h>
using namespace std;

int lPartition(int arr[], int l, int h){
	int pivot = arr[h];
	int i = l-1;
	for(int j=l; j<=h-1; j++){
		if(arr[j] < pivot){
			i++;
			swap(arr[i], arr[j]);
		}
	}
	// after this loop, j becomes h. i.e. j=h
	swap(arr[i+1], arr[h]);
	return (i+1);
}

int main(){
	int arr[7] = {10,80,30,90,40,50,70};
	int res = lPartition(arr,0,6);
	// cout<<res;
	for(int i=0;i<7;i++){
		cout<<arr[i]<<" ";
	}
}
