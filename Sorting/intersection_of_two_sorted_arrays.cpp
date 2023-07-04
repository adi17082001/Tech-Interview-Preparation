// Intersection of two sorted arrays

#include<bits/stdc++.h>
using namespace std;
// Naive approach - O(m*n)
void intersection_naive(int a[], int b[], int m, int n){
	for(int i=0;i<m;i++){
		if(i>0 && a[i]==a[i-1])  // check for duplicates
			continue;
		for(int j=0;j<n;j++){
			if(a[i]==b[j]){
				cout<<a[i]<<" ";
				break;
			}
		}
	}
}

// Efficient appraoch -> O(m+n) -> use the merge() function from mergesort
void intersection(int a[], int b[], int m, int n){
	int i=0,j=0;
	while(i<m && j<n){
		if(i>0 && a[i]==a[i-1]){   // check for duplicates
			i++;
			continue;
		}
		if(a[i]<b[j]){
			i++;
		}
		if(a[i]>b[j]){
			j++;
		}
		if(a[i]==b[j]){
			cout<<a[i]<<" ";
			i++;
			j++;
		}
	}
}

int main(){
	int a[6] = {1,20,20,30,40,60};
	int b[5] = {2,20,20,20,30};
	intersection(a,b,6,5);
}
