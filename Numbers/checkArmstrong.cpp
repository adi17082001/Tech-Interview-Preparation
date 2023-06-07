#include<bits/stdc++.h>
using namespace std;

bool isArmstrong(int n){
	int originalNum = n;
	int sum = 0;
	while(n>0){
		int ld = n%10;
		sum += (ld*ld*ld);
		n /=10;
	}
	return (originalNum==sum);
}

int main(){
	
	int n;
	cin>>n;
	cout<<isArmstrong(n)<<endl;
}
