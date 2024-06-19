#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&arr, int low, int mid, int high){
	vector<int>temp;
	//low..mid  -> first array
	//mid+1...high -> second array
	int left = low;
	int right = mid+1;
	while(left <= mid && right <= high){
		if(arr[left] < arr[right]){
			temp.push_back(arr[left]);
			left++;
		}
		else{
			temp.push_back(arr[right]);
			right++;
		}
	}
	while(left <= mid){
		temp.push_back(arr[left]);
		left++;
	}
	while(right <= high){
		temp.push_back(arr[right]);
		right++;
	}

	for(int i = low; i <= high; i++){
		arr[i] = temp[i - low];
	}
	

}

void mergeSort(vector<int>&arr, int low, int high){
	if(low == high) return;
	int mid = (low + high)/2;
	mergeSort(arr, low, mid);
	mergeSort(arr, mid+1, high);
	merge(arr, low, mid, high);
}


int main(){
	vector<int>arr = {5,4,3,2,1,0};
	int low = 0; 
	int high = arr.size() - 1;
	mergeSort(arr, low, high);

	for(auto i: arr){
		cout<<i<<" ";
	}
}

// Time complexity for Merge sort: O(NlogN) -> best, average and worst
