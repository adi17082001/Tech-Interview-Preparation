#include<bits/stdc++.h>
using namespace std;

vector<int> divisors(int n){
	vector<int>res;
	for(int i=1;i<=sqrt(n);i++){
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
