#include<bits/stdc++.h>
using namespace std;

int maxSumSubarray(int arr[], int n){
	int res = arr[0];
	int maxEnding = arr[0];
	for(int i=1;i<n;i++){
		maxEnding = max(maxEnding + arr[i], arr[i]);
		res = max(res, maxEnding);
	}
	return res;
}
int main(){
	int arr[5] = {2,1,-1,3,3};
	cout<<maxSumSubarray(arr,5);
}
