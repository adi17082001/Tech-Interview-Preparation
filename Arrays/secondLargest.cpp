#include<bits/stdc++.h>
using namespace std;


int largest(vector<int>&arr){
	int n = arr.size();
	// brute force
	// sort the array and print arr[n-1];
	// mergeSort(arr,0,n-1);
	// return arr[n-1];
	// it takes O(NlogN);

	// better
	int largest = arr[0];
	for(int i = 1; i < n; i++){
		if(arr[i] > largest){
			largest = arr[i] ;
		}
	}
	return largest;
}

int secondLargest(vector<int>&arr){
	
	// brute force

	/* int n = arr.size();
	mergeSort(arr,0,n-1);
	int sLargest = INT_MIN;
	int large = largest(arr);
	for(int i = n-2; i >= 0 ; i--){
		if(arr[i] < large){
			sLargest = arr[i];
			break;
		}
	}
	return sLargest;
	*/


	// better
	/* int n = arr.size();
	int sLargest = -1;
	int largestNum = largest(arr);
	for(int i = 0; i < n; i++){
		if(arr[i] > sLargest && arr[i] != largestNum){
			sLargest = arr[i];
		}
	}
	return sLargest;
	*/
	

	//optimal
	int n = arr.size();
	int largest = arr[0];
	int sLargest = INT_MIN;
	for(int i = 0; i < n; i++){
		if(arr[i] > largest){
			sLargest = largest;
			largest = arr[i];
		}
		else if(arr[i] < largest && arr[i] > sLargest){
			sLargest = arr[i];
		}
	}
	return sLargest;
}



int main(){
	vector<int>arr;
	int n;
	cin>>n;
	for(int i = 0; i < n; i++){
		int x;
		cin>>x;
		arr.push_back(x);
	}
	
	cout<<secondLargest(arr);

}
