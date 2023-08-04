#include<bits/stdc++.h>
using namespace std;
long long int ceil(int arr[], int n, int x){
	long long  ans = -1;
	int low = 0, high = n-1;
	while(low<=high){
		int mid = (low+high)/2;
		if(arr[mid]>=x){
			ans = arr[mid];
			high = mid -1 ;
		}else{
			low = mid + 1;
		}
	}
	return ans;
}
int main(){
    vector<int>arr = {10,20,30,40,50};
    cout<<ceil(5,25,arr);
}
