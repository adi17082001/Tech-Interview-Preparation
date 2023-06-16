#include<bits/stdc++.h>
using namespace std;

int deleteArray(int arr[], int n, int x){
	int i;
	for(i=0;i<n;i++){
		if(arr[i]==x) break;
	}
	if(i==n) return n;
	for(int j=i;j<n-1;j++){
		arr[j] = arr[j+1];
	}
	arr[n-1]= 0;
	return n;
}

int main(){
	int arr[10] = {3,8,12,33,44,5,6};
	int n = deleteArray(arr,10,3);
	for(int i=0;i<10;i++){
		cout<<arr[i]<<" ";
	}
}
