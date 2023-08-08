// this is a rotated sorted array, containing all DISTINCT elements.

#include<bits/stdc++.h>
using namespace std;

int search(vector<int>&arr, int target){
	int n = arr.size();
	int low = 0, high = n-1;
	while(low<=high){
		int mid = (low+high)/2;
		if(arr[mid] == target) return mid;

		// if left sorted
		if(arr[low] <= arr[mid]){
			if(arr[low] <= target && target <= arr[mid]){ // if target present in left half
				high = mid - 1;                             // eliminate the right half.
			}
			else{
				low = mid + 1; // if target not present in left half, eliminate the left half.
			}
		}
		// if right half is sorted
		else{
			if(arr[mid]<=target && target <= arr[high]){    // if target present in right half.
				low = mid + 1;                                // eliminate the left half.
			}else{                                         // if target not present in right half.
				high = mid - 1;                              // eliminate the right half.
			}
		}
	}
	return -1;
}

int main(){
	vector<int>arr = {7,8,9,1,2,3,4,5,6};
	cout<<search(arr,1)<<endl;
}
