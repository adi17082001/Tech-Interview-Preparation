#include<bits/stdc++.h>
using namespace std;

int reverseNum(int n){
	int rev_num = 0;

	while(n>0){
		int ld = n%10;
		rev_num = (rev_num*10) + ld;
		n /=10;
	}
	return rev_num;
}


int main(){
	
	int n;
	cin>>n;
	cout<<reverseNum(n)<<endl;
}
