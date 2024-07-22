#include<bits/stdc++.h>
using namespace std;

// type 1: return "yes" if there are 2 elements with sum == target. "NO" otherwise
// type 2: return indexes of both the elements that add up to target.


// optimal for type 1: 
string TwoSum(vector<int>&arr, int target){
	int n  = arr.size();
	int left = 0, right = n-1;
	while(left < right){
		int sum = arr[left] + arr[right];
		if(sum == target) return "YES";
		else if (sum < target) left++;
		else right--;
	}
	return "NO";
}

// T.C. = O(N) + O(NlogN)
// S.C. = O(1) // no extra space ;; [O(N) -> considering the distortion of array]


// optimal for type2
vector<int> TwoSum(vector<int>&arr, int target){
	vector<int>res;

	map<int,int>mpp;
	for(int i = 0; i < arr.size(); i++){
		int extra = target - arr[i];
		if(mpp.find(extra) != mpp.end()){
			res.push_back(mpp[extra]);
			res.push_back(i);
		}
		mpp[arr[i]] = i;
	}

	return res;
}

// T.C. = O(NlogN), S.C. = O(N)



int main(){
	vector<int>arr = {2,5,6,8,11};
	int target = 14;

	// Type 1: 
	cout << TwoSum(arr,target);

	// Type 2: 
	// vector<int>ans = TwoSum(arr,target);
	// for(auto i: ans){
	// 	cout << i << " ";
	// }

}
