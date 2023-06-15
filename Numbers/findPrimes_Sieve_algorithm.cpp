#include<bits/stdc++.h>
using namespace std;
//const int N = 1e5+10;
// Sieve Algorithm  -> find primes from 1 to n
vector<int>Primes(int n){
	vector<int>res;
	vector<bool>isPrime(n+1,1);
	isPrime[0] = isPrime[1] = false;
	for(int i=2;i<=n;i++){
		if(isPrime[i] == true){
			for(int j=2*i;j<=n;j++){
				if(j%i==0) isPrime[j] = false;
			}
		}
	}
	for(int i=0;i<n+1;i++){
		if(isPrime[i]) res.push_back(i);
	}
	return res;
}

int main(){
	int n;
	cin>>n;
	vector<int>primes = Primes(n);
	for(auto i: primes){
		cout<<i<<endl;
	}
}
