#include<bits/stdc++.h>
using namespace std;


//Naive approach:
int largestElement(int arr[], int n){
	for(int i=0;i<n;i++){
		bool flag = true;


		for(int j=0;j<n;j++){
			if(arr[j]>arr[i]){
				flag = false;
				break;
			}
		}
		if(flag==true){
			return i;
		}
	}
	return -1;
}

//Efficient approach.

int getLargestElement(int arr[], int n){
	int res = 0;
	for(int i=1;i<n;i++){
		if(arr[i]>arr[res]){
			res = i;
		}
	}
	return res;
}

int main(){
	int arr[] = {1,2,3,4,5};
	cout<<getLargestElement(arr,5);
}



