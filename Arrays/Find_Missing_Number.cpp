#include<bits/stdc++.h>
using namespace std;

int findMissingNumber_brute(int arr[], int N){
	for(int i = 1; i <= N; i++){
		int flag = 0;
		for(int j = 0; j < N-1; j++){
			if(arr[j] == i){
				flag = 1; 
				break;
			}
		}
		if(flag == 0){
			return i;
		}
	}
	return -1;
}

int findMissingNumber_better(int arr[], int N){
	int ans = 0;
	int hshArray[N+1] = {0};
	for(int i = 0; i < N-1; i++){
		hshArray[arr[i]]++;
	}
	for(int j = 1; j < N+1; j++){
		if(hshArray[j] == 0){
			ans = j;
			break;
		}
	}
	return ans;
}

// TC = O(2N), SC = O(N)

int findMissingNumber_usingSum(int arr[], int N){
	int sum1 = N * (N+1) / 2;
	int sum2 = 0;
	for(int i = 0; i < N-1; i++){
		sum2 += arr[i];
	}
	return (sum1 - sum2);
}


int findMissingNumber_optimal(int arr[], int N){
	int xor1 = 0, xor2 = 0;
	for(int i = 0; i < N-1; i++){
		xor2 = xor2 ^ arr[i];
		xor1 = xor1 ^ (i+1);
	}

	xor1 = xor1 ^ N;

	return (xor2 ^ xor1);
}

// T.C. = O(N); S.C. = O(1)s


int main(){
	int arr[7] = {1,2,3,4,5,6,8};
	int N = 8;
	cout << findMissingNumber_optimal(arr, N);
}
