#include<bits/stdc++.h>
using namespace std;

// Naive approach = using naive partition algorithm
void segPosNeg(int arr[], int n){
	int temp[n], i=0;
	for(int j=0;j<n;j++){
		if(arr[j]<0){
			temp[i] = arr[j];
			i++;
		}
	}
	for(int j=0;j<n;j++){
		if(arr[j]>=0){
			temp[i] = arr[j];
			i++;
		}
	}
	for(int j=0;j<n;j++){
		arr[j] = temp[j];
	}
}

// Efficient approach- Using Hoares' partition algorithm
void segregatePosNeg(int arr[], int n){
    int i=-1, j = n;
    while(true){
        do{i++;} while(arr[i]<0);
        do{j--;} while(arr[j]>=0);
        if(i>=j){
            return ;
        }    
        swap(arr[i], arr[j]);    
    }
}

int main(){
	int arr[6] = {15,-3,-2,18,-1,-6};
	segregatePosNeg(arr,6);
	for(int i=0;i<6;i++){
		cout<<arr[i]<<" ";
	}

}
