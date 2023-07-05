#include <bits/stdc++.h>
using namespace std;


int hPartition(int arr[], int l, int h){
	int pivot = arr[l];
	int i = l-1, j = h+1;

	while(true){
		do{
			i++;
		}while(arr[i]<pivot);

		do{
			j--;
		}while(arr[j]>pivot);

		if(i>=j) return j;
		swap(arr[i], arr[j]);
	}
	return -1;
}

int main(){
	int arr[8] = {5,3,8,4,2,7,1,10};
	int res = hPartition(arr,0,7);
	for(int i=0;i<8;i++){
		cout<<arr[i]<<" ";
	}
}
