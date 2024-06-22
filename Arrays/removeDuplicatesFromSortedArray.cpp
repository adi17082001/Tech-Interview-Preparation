#include<bits/stdc++.h>
using namespace std;

int removeDups(vector<int>&arr){
	int n = arr.size();
	int i = 0;
	for(int j = 1; j < n; j++){
		if(arr[j] != arr[i]){
			arr[i+1] = arr[j];
			i++;
		}
	}
	return i+1;
}


int main(){
	vector<int>arr = {1,1,2,2,2,3,3};
	cout<<removeDups(arr)<<endl;
	for(auto i : arr){
		cout<<i<<" ";
	}	
}
