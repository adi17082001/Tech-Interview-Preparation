#include<bits/stdc++.h>
using namespace std;

// brute force:
void mergeSortedArrays(long long arr1[], long long arr2[], int n, int m){
	long long arr3[n+m];
	int left = 0, right = 0, index = 0;

	while(left < n && right < m){
		if(arr1[left] <= arr2[right]){
			arr3[index] = arr1[left];
			left++ ; index++ ;
		}else{
			arr3[index] = arr2[right];
			right++ ; index++ ;
		}
	}
	while(left < n){
		arr3[index++] = arr1[left++];
	}
	while(right < m){
		arr3[index++] = arr2[right++];
	}

	for(int i = 0; i < n+m; i++){
		if(i < n) arr1[i] = arr3[i];
		else arr2[i-n] = arr3[i];
	}
}

// optimal: 
void mergeSortedArrays(long long arr1[], long long arr2[], int n, int m){
	int left = n-1;
	int right = 0;

	while( left >= 0 && right < m){
		if(arr1[left] > arr2[right]){
			swap(arr1[left], arr2[right]);
			left--; right++;
		}else{
			break;
		}
	}
	sort(arr1, arr1 + n);
	sort(arr2, arr2 + m);

}



int main(){
	long long arr1[] = {1,3,5,7};
	long long arr2[] = {0,2,6,8,9};
	mergeSortedArrays(arr1, arr2, 4, 5);
	for(auto i: arr1){
		cout<<i<<" ";
	}
	cout<<endl;
	for(auto i: arr2){
		cout<<i<<" ";
	}
}
