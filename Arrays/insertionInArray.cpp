#include<bits/stdc++.h>
using namespace std;

int insert(int arr[],int n, int cap, int pos, int val){
	if(n==cap) return n;
	int index = pos - 1;
	for(int i=n-1;i>=index;i--){
		arr[i+1] = arr[i];
	}
	arr[index] = val;
	return n+1;
}

int main(){
	int arr[5] = {1,2,3,4};
	int res = insert(arr,5,4,2,5);
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
}
