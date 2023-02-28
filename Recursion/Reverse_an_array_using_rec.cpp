// reverse an array using recursion
#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int i, int n){
	if(i>=n/2) return;
	swap(arr[i],arr[n-i-1]);
	reverse(arr,i+1,n);
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
	reverse(arr,0,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
