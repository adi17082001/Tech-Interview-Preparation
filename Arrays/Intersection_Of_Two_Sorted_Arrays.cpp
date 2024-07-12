#include<bits/stdc++.h>
using namespace std;


// brute

vector<int>intersection_brute(vector<int>&a, vector<int>&b){

	// check if element in a[] has a corresponding element in b[] and mark it as "visited in b[]"
	// declare a visited array of size of b[]
	// result vector
	vector<int> ans;

	int n1 = a.size();
	int n2 = b.size();

	vector<int> visited(n2);

	for(int i = 0; i < n1; i++){
		for(int j = 0; j < n2; j++){
			if(a[i] == b[j] && visited[j] == 0){
				ans.push_back(a[i]);
				visited[j] = 1;
				break;
			}

			if(b[j] > a[i]) break;
		}
	}

	return ans;
}

// T.C. = O(n1 * n2)
// S.C. = O(n2)



// optimal

vector<int>intersection(vector<int>&a, vector<int>&b){

	// declare the result array
	vector<int> ans;

	int n1 = a.size();
	int n2 = b.size();

	int i = 0;
	int j = 0;

	while(i < n1 && j < n2){
		if(a[i] < b[j]){
			i++;
		}
		else if(b[j] < a[i]){
			j++;
		}
		else{
			ans.push_back(a[i]);
			i++;
			j++;
		}
	}
	return ans;
}

// T.C. = O(n1 + n2)
// S.C. = O(1)


int main(){
	vector<int>a = {1,2,2,3,3,4,5,6} ;
	vector<int>b = {2,3,3,5,6,6,7} ;  

	vector<int>res = intersection(a,b);
	for(auto i: res){
		cout<<i<<" ";
	}
}
