#include<bits/stdc++.h>
using namespace std;

// naive
void moveZerosToEnd(int arr[], int n){
	for(int i=0;i<n;i++){
		if(arr[i]==0){
			for(int j=i+1;j<n;j++){
				if(arr[j]!=0){
					swap(arr[i],arr[j]);
				}
			}
		}
	}
}


//efficient
void moveToEnd(int arr[], int n){
	int count = 0;
	for(int i=0;i<n;i++){
		if(arr[i]!=0){
			swap(arr[i],arr[count]);
			count++;
		}
	}
}


int main(){
	int arr[6] = {10,8,0,0,12,0};
	moveToEnd(arr,6);
	
	for(int i=0;i<6;i++){
		cout<<arr[i]<<" ";
	}

}
