#include<bits/stdc++.h>
using namespace std;

// brute approach
vector<int>unionOfSortedArrays_brute(vector<int>&a, vector<int>&b){
	int n1 = a.size();
	int n2 = b.size();

	// push all elements into the ordered set.
	set<int>st;
	for(int i = 0; i < n1; i++){
		st.insert(a[i]);
	}
	for(int i = 0; i < n2; i++){
		st.insert(b[i]);
	}

	// declare the union array
	int x = st.size();
	vector<int>unionArr(x);
	int i = 0;
	for(auto it: st){
		unionArr[i] = it;
		i++;
	}

	return unionArr;

}

// T.C. = O(n1logN) + O(n2logN) + O(n1 + n2)
// S.C. = O(n1 + n2) + O(n1 + n2)



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
	vector<int>unionArr = unionOfSortedArrays(a,b);
	for(auto i: unionArr){
		cout<<i<<" ";
	}
}
