#include<bits/stdc++.h>
using namespace std;

int maxSumSubArray(vector<int>&nums){
	int maxSum = 0;
	int curSum  = 0;
	
	if(all_of(nums.begin(), nums.end(), [](int x){return x<0;})){
	    int max = nums[0];
	    for(int i=0;i<nums.size();i++){
	        if(nums[i]>max){
	            max = nums[i];
	        }
	    }
	    return max;
	}

	else{
	    for(int i=0;i<nums.size();i++){
		curSum = curSum + nums[i];
		if(curSum>maxSum){
			maxSum = curSum;
		}
		if(curSum<0){
			curSum = 0;
		}
	}
	return maxSum;
	}
}

int main(){
	cout<<"EEEE";
}