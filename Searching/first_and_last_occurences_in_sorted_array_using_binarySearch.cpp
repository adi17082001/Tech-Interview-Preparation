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
pair<int,int>firstAndLastOccurence(int arr[], int n, int x){
	int first = firstOccurence(arr,8,8);
	if(first == -1) return {-1,-1};  // if first = -1, means no first occurence, that means x is not present, so no last occurence too, so return {-1,-1};
	int last = lastOccurence(arr,8,8);
	return {first,last};
}

int main(){
	int arr[8] = {2, 8, 8, 8, 8, 8, 11, 13};
	pair<int,int>ans = firstAndLastOccurence(arr,8,8);
	cout<<ans.first<<" "<<ans.second<<endl;

}
