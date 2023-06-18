#include<bits/stdc++.h>
using namespace std;

void frequencies(int arr[], int n){
	int ct=1, i=1;
	while(i<n){
		while(i<n && arr[i] == arr[i-1]){
			ct++;
			i++;
		}
		cout<<arr[i-1]<<" "<<ct<<endl;
		i++;
		ct = 1;
	}
	if(n==1 || arr[n-1] != arr[n-2]){
		cout<<arr[n-1]<<" "<<1;
	}
}

int main(){
	int arr[6] = {10,10,10,25,30,30};
	frequencies(arr,6);
}
