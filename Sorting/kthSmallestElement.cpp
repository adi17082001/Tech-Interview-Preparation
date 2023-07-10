//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

// Naive
int kthSmallest_naive(int arr[], int l, int r, int n, int k){
  sort(arr, arr+n);
  return arr[k-1];
}
// Efficient : O(N^2) in worst case, but linear time complexity in average case
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

int kthSmallest(int arr[], int l, int r, int k) {
        //code here
    while(l<=r){
       	int p = lPartition(arr,l,r);
        if(p==k-1){
            return arr[p];
        }
        else if(p>k-1){
            r = p-1;
        }
        else{
            l = p+ 1;
        }
    }
    return -1;
}



