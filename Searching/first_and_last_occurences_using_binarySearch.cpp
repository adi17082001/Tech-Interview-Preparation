#include<bits/stdc++.h>
using namespace std;

int firstOccurence(int arr[], int n, int x){
	int low = 0, high = n-1;
	int first = -1;
	while(low<=high){
		int mid = (low+high)/2;
		if(arr[mid]==x){
			first = mid;
			high = mid-1;
		}
		else if(arr[mid]<x){
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	return first;
}

int lastOccurence(int arr[], int n, int x){
	int low = 0, high = n-1;
	int last = -1;
	while(low<=high){
		int mid = (low+high)/2;
		if(arr[mid]==x){
			last = mid;
			low = mid + 1;
		}
		else if(arr[mid]<x){
			low = mid + 1;
		}
		else{
			high = mid - 1;
		}
	}
	return last;
}

int main(){
	int arr[8] = {2, 8, 8, 8, 8, 8, 11, 13};
	cout<<firstOccurence(arr, 8, 8)<<endl;
	cout<<lastOccurence(arr, 8, 8)<<endl;
}
