// find max difference arr[j] - arr[i] where j>i
#include<bits/stdc++.h>
using namespace std;

int maxDifferenceBruteForce(int arr[], int n){
	int res = arr[1] - arr[0];
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			res = max(res, arr[j] - arr[i]);
		}
	}
	return res;
}

int maxDifference(int arr[], int n){
	int res = arr[1] - arr[0];
	int minVal = arr[0];

	for(int j=1;j<n;j++){
		res = max(res,arr[j] - minVal);
		minVal = min(minVal, arr[j]);
	}
	return res;
}

int main(){
	int arr[5] = {2,3,10,6,4};
	cout<<maxDifference(arr,5);
}
