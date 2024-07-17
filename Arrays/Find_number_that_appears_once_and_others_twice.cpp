#include<bits/stdc++.h>
using namespace std;


int findNumThatAppearsOnce(vector<int>&nums){

	int xor1 = 0;
	for(auto i : nums){
		xor1 = xor1 ^ i;
	}

	return xor1;
}

// T.C. = O(N)   ;   S.C. = O(1)


int main(){
	vector<int>arr = {1,1,2,2,3,4,4};
	cout << findNumThatAppearsOnce(arr);
}
