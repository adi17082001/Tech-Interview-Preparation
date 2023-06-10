#include<bits/stdc++.h>
using namespace std;

vector<int>primeFactors(int n){
	vector<int>prime_factors;
	for(int i=2;i<=sqrt(n);i++){
		while(n%i==0){
			prime_factors.push_back(i);
			n = n/i;
		}
	}
	if(n>1){
		prime_factors.push_back(n);
	}

	return prime_factors;
}

int main(){
	int n;
	cin>>n;
	vector<int>res = primeFactors(n);
	for(auto i: res){
		cout<<i<<" ";
	}
}
