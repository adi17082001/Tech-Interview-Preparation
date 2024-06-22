#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>&arr, int low, int high){
	int pivot = arr[low];
	int i = low; 
	int j = high;

	while(i < j){
		while(arr[i] <= pivot && i <= high-1){
			i++;
		}
		while(arr[j] > pivot && j >= low+1){
			j--;
		}
		if(i<j) swap(arr[i], arr[j]);

	}
	swap(arr[low], arr[j]);
	return j;
}

void quickSort(vector<int>&arr, int low, int high){
	if(low < high){
		int partitionIndex = partition(arr, low, high);
		quickSort(arr, low, partitionIndex - 1);
		quickSort(arr, partitionIndex + 1, high);
	}
}

int main(){
	vector<int>arr = {5,4,3,2,1,10,44,55,111,22,3,1,20,0,10,10,0,0,1};
	quickSort(arr,0,arr.size()-1);
	for(auto i: arr){
		cout<<i<<" ";
	}
}
