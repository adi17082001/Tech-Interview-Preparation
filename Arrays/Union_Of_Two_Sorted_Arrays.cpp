#include<bits/stdc++.h>
using namespace std;


// optimal approach 
vector<int> unionOfSortedArrays(vector<int>&a, vector<int>&b){
	int n1 = a.size();
	int n2 = b.size();

	int i = 0, j = 0;
	vector<int>unionArr;

	while(i < n1 && j < n2){
		if(a[i] <= b[j]){
			if(unionArr.size() == 0 || unionArr.back() != a[i]){
				unionArr.push_back(a[i]);
			}
			i++;
		}
		else{
			if(unionArr.size() == 0 || unionArr.back() != b[j]){
				unionArr.push_back(b[j]);
			}
			j++;
		}
	}

	while( i < n1){
		if(unionArr.size() == 0 || unionArr.back() != a[i]){
				unionArr.push_back(a[i]);
			}
			i++;
	}

	while(j < n2){
		if(unionArr.size() == 0 || unionArr.back() != b[j]){
				unionArr.push_back(b[j]);
			}
			j++;
	}

	return unionArr;
}

// T.C. = O(n1+n2)
// S.C. = O(n1+n2)


int main(){
	vector<int>a = {1,1,2,3,4,5};
	vector<int>b = {2,3,3,4,5,6};
	vector<int>unionArr = unionOfSortedArrays_brute(a,b);
	for(auto i: unionArr){
		cout<<i<<" ";
	}
}
