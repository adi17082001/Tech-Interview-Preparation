#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>&v, int x){
	int n = v.size();
	int lo = 0, hi = n-1;
	int mid;
	while(hi-lo>1){
		mid = (lo + hi)/2;
		if(v[mid] < x){
			lo = mid + 1;
		}
		else{
			hi = mid;
		}
	}
	if(v[lo] == x) return lo;
	else if(v[hi] == x) return hi;
	return -1;
}


int main(){
	vector<int>v = {22,33,44,66,556,7777};
	int index = binarySearch(v,44);
	cout<<index;
}
