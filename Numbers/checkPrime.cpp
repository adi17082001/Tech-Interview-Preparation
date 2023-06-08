#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
	bool is_prime = true;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			is_prime = false;
			break;
		}
	}
	return is_prime;
}

int main(){

	int n;
	cin>>n;
	cout<<isPrime(n);
}
