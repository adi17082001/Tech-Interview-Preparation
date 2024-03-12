#include<bits/stdc++.h>
using namespace std;

vector<int> divisors(int n){
	vector<int>res;
	for(int i=1;i*i<=n;i++){ // we write this instead of "for(int i = 1; i <= sqrt(n); i++)" as sqrt() is a mathematical function and it will be called everytime. So to reduce time, we write like this.
		if(n%i==0){
			res.push_back(i);
			if(n/i != i){
				res.push_back(n/i);
			}
		}
	}
	sort(res.begin(), res.end());
	return res;
}

int main(){
	int n;
	cin>>n;
	vector<int>res = divisors(n);
	for(auto i: res){
		cout<<i<<endl;
	}
}
