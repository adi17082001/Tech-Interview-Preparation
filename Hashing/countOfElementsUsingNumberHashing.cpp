#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}

	// pre-compute

	map<int,int>mpp;
	for(int i = 0; i <= n; i++){
		mpp[arr[i]]++;
	}

	int q;
	cin>>q;
	while(q--){
		int number;
		cin>>number;

		// fetch
		cout<<mpp[number]<<endl;
	}
}


/* 

Input: 
5
1 2 3 2 1
5
1
3
2
5
12

*/
