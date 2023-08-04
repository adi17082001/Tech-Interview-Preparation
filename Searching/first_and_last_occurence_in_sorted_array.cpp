#include<bits/stdc++.h>
using namespace std;

int lowerBound(int arr[], int n, int x){
	int low = 0, high = n-1;
	int ans = n;
	while(low<=high){
		int mid = (low+high)/2;
		if(arr[mid]>=x){
			ans = mid;
			high = mid-1;
		}
		else{
			low = mid + 1;
		}
	}
	return ans;
}

int upperBound(int arr[], int n, int x){
	int low = 0, high = n-1;
	int ans = n;
	while(low<=high){
		int mid = (low+high)/2;
		if(arr[mid]>x){
			ans = mid;
			high = mid-1;
		}
		else{
			low = mid + 1;
		}
	}
	return ans;
}

pair<int,int>firstAndLast(int arr[], int n, int x){
	int lb = lowerBound(arr,n,x);
	if(lb==n || arr[lb] != x) return {-1,-1};
	return {lb,upperBound(arr,n,x)-1};
}

int main(){
	int n,x;	
	cin>>n>>x;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	pair<int,int>ans = firstAndLast(arr,n,x);
	cout<<ans.first<<" "<<ans.second<<endl;
}
