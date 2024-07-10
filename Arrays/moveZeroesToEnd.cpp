#include<bits/stdc++.h>
using namespace std;

// brute force
void moveZeroes_brute(vector<int>&nums){
	vector<int>temp;
	int n = nums.size();

	// step 1: push all non zero elements to temp array
	for(int i = 0; i < n; i++){
		if(nums[i] != 0){
			temp.push_back(nums[i]);
		}
	}


	// step 2: place all non zero elements from temp to nums in front
	int nonzeros = temp.size();
	for(int i =0; i < temp.size(); i++){
		nums[i] = temp[i];
	}

	// step 3: fill all remaining places in nums with zeroes
	for(int i = nonzeros; i < n; i++){
		nums[i] = 0;
	}
}

// T.C. : O(2N)
// S.C. : O(x) where x is the no of non zero elements. O(N) in worst case (when all are non zero)




// optimal approach 
void moveZeroes(vector<int>& nums){
        int j = -1;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(nums[i] == 0){
                j = i;
                break;
            }
        }
        if(j == -1) return;
        for(int i = j + 1; i < n; i++){
            if(nums[i] != 0){
                swap(nums[i], nums[j]);
                j++;
            }
        }
}

// T.C : O(N)
// S.C : O(1)


int main(){
	vector<int>nums = {1,0,2,3,2,0,0,4,5,1};
	moveZeroes(nums);
	for(auto i: nums){
		cout<<i<<" ";
	}
}
