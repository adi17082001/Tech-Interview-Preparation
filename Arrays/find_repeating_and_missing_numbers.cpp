#include<bits/stdc++.h>
using namespace std;

//better 
vector<int>repeatingAndMissingNumbers(vector<int>&arr){
	int n = arr.size();
	int hash[n+1] = {0};
	for(int i = 0; i < n; i++){
		hash[arr[i]]++;
	}
	int repeating = -1, missing = -1;
	for(int i = 1; i <= n; i++){
		if(hash[i] == 2) repeating = i;
		else if(hash[i] == 0) missing = i;
		if(repeating != -1 && missing != -1){
			break;
		}
	}
	return {repeating, missing};

}

//optimal
vector<int>repeatingAndMissingNumbers(vector<int>&arr){
	long long n = arr.size();
	//S - Sn = x - y
	//S2 - S2n

	long long Sn = (n*(n+1))/2;
	long long S2n = (n*(n+1)*(2*n+1))/6;

	long long S = 0, S2 = 0;
	for(int i = 0; i < n; i++){
		S += arr[i];
		S2 += (long long)arr[i] * (long long)arr[i];
	}

	long long val1 = S - Sn; // x - y
	long long val2 = S2 - S2n; // x^2 - y^2

	val2 = val2/val1;  // x + y

	long long x =  (val1 + val2) / 2;
	long long y =  x - val1;

	return {(int)x, (int)y};

}



int main(){
	vector<int>arr = {4,3,6,2,1,1};

	vector<int>res = repeatingAndMissingNumbers(arr);
	cout<<"repeating: "<<res[0]<<endl;
	cout<<"missing: "<<res[1]<<endl;
}
