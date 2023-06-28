#include<bits/stdc++.h>
using namespace std;

bool isSubSum(int arr[], int n, int sum){
	int curr_sum = arr[0], s = 0;
	for(int e=1;e<=n;e++){
		// clear the prev window
		while(curr_sum>sum && s<e-1){
			curr_sum -= arr[s];
			s++;
		}
		if(curr_sum==sum){
			return true;
		}
		if(e<n){
			curr_sum += arr[e];
		}
	}
	return (curr_sum == sum);
}

int main(){
	int arr[6] = {1,4,20,3,1,5};
	cout<<isSubSum(arr,6,6);
}
