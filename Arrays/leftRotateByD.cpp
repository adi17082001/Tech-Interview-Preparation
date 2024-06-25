#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int low, int high){
	while(low <= high){
		swap(arr[low], arr[high]);
		low++;
		high--;
	}
}

void leftRotateByD(int arr[], int n , int d){

	/*brute

	// copy elements from 0 to d-1 in temp
	int temp[d];
	for(int i = 0; i < d; i++){
		temp[i] = arr[i];
	}

	// shifting elements from d to n-1
	for(int i = d; i < n; i++){
		arr[i-d] = arr[i];
	}

	// pushing back elements from temp to arr
	for(int i = n-d; i < n; i++){
		arr[i] = temp[i - (n-d)];
	}

	*/

	/* Optimal */

	reverse(arr, arr + d);
	reverse(arr + d, arr + n);
	reverse(arr, arr + n);
}


int main(){
	int arr[7] = {1,2,3,4,5,6,7};
	leftRotateByD(arr,7,3);
	for(int i = 0; i < 7; i++){
		cout<<arr[i]<<" ";
	}
}
