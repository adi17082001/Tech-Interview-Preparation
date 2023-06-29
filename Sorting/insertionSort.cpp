#include<bits/stdc++.h>
using namespace std;

void insertionsort(vector<int> &a){
	int n = a.size();
	int key, j;
	for(int i=0;i<=n-1;i++){
		key = a[i];
		j = i-1;

		while(a[j]>key && j>=0){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
	}
}

int main(){
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	insertionsort(a);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
