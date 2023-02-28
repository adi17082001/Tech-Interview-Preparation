// reverse an array using recursion
#include<bits/stdc++.h>
using namespace std;

void reverse(int i, int arr[], int n){
	if(i>=n/2) return;
	swap(arr[i],arr[n-i-1]);
	reverse(i+1,arr,n);
}
void reverseCustom(int arr[],int low, int high){
	if(low>=high){
		return;
	}
	swap(arr[low],arr[high]);
	reverseCustom(arr,low+1,high-1);
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	reverseCustom(arr,0,n-1);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
