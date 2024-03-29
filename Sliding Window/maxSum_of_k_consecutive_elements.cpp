#include<bits/stdc++.h>
using namespace std;

int maxSumOfKConsecutiveElements(int arr[], int n, int k){
	int curr_sum =0;
	for(int i=0;i<k;i++){
		curr_sum += arr[i];
	}
	int max_sum = curr_sum;
	for(int i=k;i<n;i++){
		curr_sum += (arr[i] - arr[i-k]);
		max_sum = max(max_sum,curr_sum);
	}
	return max_sum;
}

int main(){
	int arr[6] = {1,8,30,-5,20,7};
	int k = 3;
	int res = maxSumOfKConsecutiveElements(arr,6,3);
	cout<<res;
}