#include<bits/stdc++.h>
using namespace std;


void printSpiral(vector<vector<int>>&matrix, int m, int n){
	vector<int>res = {};
	int top = 0, left = 0, bottom = m-1, right = n-1;

	while(top<=bottom && left<=right){
		for(int i=left; i<=right;i++){
			res.push_back(matrix[top][i]);
		}
		top++;

		for(int i = top; i<=bottom; i++){
			res.push_back(matrix[i][right]);
		}
		right--;

		if(top<=bottom){
			for(int i=right;i>=left;i--){
				res.push_back(matrix[bottom][i]);
			}
			bottom--;
		}
		if(left<=right){
			for(int i=bottom;i>=top;i--){
				res.push_back(matrix[i][left]);
			}
			left++;
		}
	}
	for(auto i: res){
		cout<<i<<" ";
	}
}

int main(){
	vector<vector<int>>matrix = {{1,2,3},{4,5,6},{7,8,9}};
	int m = matrix.size();
	int n = matrix[0].size();
	printSpiral(matrix,m,n);
}