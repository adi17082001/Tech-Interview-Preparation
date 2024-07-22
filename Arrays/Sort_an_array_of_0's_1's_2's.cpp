#include<bits/stdc++.h>
using namespace std;

// Brute
void sortArray(int arr[], int n){
	int ct0, ct1, ct2;
	for(int i = 0; i < n; i++){
		if(arr[i] == 0) ct0++;
		if(arr[i] == 1) ct1++;
		if(arr[i] == 2) ct2++;
	}

	for(int i = 0 ; i < ct0; i++){
		arr[i] = 0;
	}
	for(int i = ct0; i < ct0 + ct1; i++){
		arr[i] = 1;
	}
	for(int i = ct0 + ct1; i < n; i++){
		arr[i] = 2;
	}

	return;
}

// T.C. = O(2N), S.C. = O(1)


// optimal  -> Dutch National Flag Algorithm

void sortArray(vector<int>& nums) {
        int n = nums.size();
        int low = 0, mid = 0, high = n-1;
        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[mid], nums[low]);
                mid++;
                low++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }

// T.C. = O(N), S.C. = O(1)

int main(){
	vector<int>arr = {0,1,0,1,2,1,2,0,0,1};
	sortArray(arr);
	for(auto i : arr){
		cout<<i<<" ";
	}

}
