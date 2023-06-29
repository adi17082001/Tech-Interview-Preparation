#include<bits/stdc++.h>
using namespace std;

void selectionsort(vector<int> &a){
	int indexofMin, temp;
	int n = a.size();
	for(int i=0;i<n;i++){
		indexofMin = i;
		for(int j = i+1; j<n; j++){
			if(a[j] < a[indexofMin]){
				indexofMin = j;
			}
		}
		// swap a[j] and a[indexofmin];
		temp = a[i];
		a[i] = a[indexofMin];
		a[indexofMin] = temp;
	}
}

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	selectionsort(a);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
}
