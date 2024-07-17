#include<bits/stdc++.h>
using namespace std;


int maxConsecutiveOnes(vector<int>&nums){
	int ct = 0, maxi = 0;
	for(int i = 0; i < nums.size(); i++){
		if(nums[i] == 1){
			ct++;
			maxi = max(maxi, ct);
		}else{
			ct = 0;
		}
	}
	return maxi;
}

// T.C. = O(N) ; S.C. = O(1)



int main(){
	vector<int>nums = {1,1,0,1,1,1,0,1,1};
	cout << maxConsecutiveOnes(nums);
}
