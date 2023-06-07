#include<bits/stdc++.h>
using namespace std;

int countOfDigits(int n){
	int ct = 0 ;
	while(n>0){
		int last_digit = n%10;
		ct += 1;
		n /=10;
	}
	return ct;
}

int main(){

	int n;
	cin>>n;
	cout<<countOfDigits(n)<<endl;
}
