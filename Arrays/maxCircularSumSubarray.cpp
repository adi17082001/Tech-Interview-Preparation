int maxSumSubarray(int arr[], int n){
	int res = arr[0];
	int maxEnding = arr[0];
	for(int i=1;i<n;i++){
		maxEnding = max(maxEnding + arr[i], arr[i]);
		res = max(res, maxEnding);
	}
	return res;
}
// we need to calculate the minimum sum subarray and then subtract it from total array sum to get the max circular subarray sum
// instead of writing a different function for minSumSubarray, we invert all the elements of array and calculate the maxSumSubarray() which is basically the minSumSubarray of the original array .
// after calculating the minSumSubarray i.e. the maxSumSubarray of the inverted array, we add it to the arr_sum:
// max_circular = arr_sum - minSumSubarray(arr)  which is same as max_circular = arr_sum + maxSumSubarray(inverted arr);
int circularSubarraySum(int arr[], int num){
        int max_normal = maxSumSubarray(arr,num);
        if(max_normal<0) return max_normal;
        int arr_sum = 0;
        for(int i=0;i<num;i++){
            arr_sum += arr[i];
            arr[i] = -arr[i];
        }
        int max_circular = arr_sum + maxSumSubarray(arr,num);
        return max(max_normal, max_circular);
        // your code here
}
