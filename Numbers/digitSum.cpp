#include<bits/stdc++.h>
using namespace std;

int digitSum(int n){
	int sum = 0;
	while(n>0){
		sum += n%10;
		n /= 10;
	}
	return sum;
}

// 1234 = 4 + digit_sum(123)
// 1234 = 4 + 3 + digit_sum(12)....
// digit_sum(n) = digit_sum(n/10) + last_digit

int digitSumRecursion(int n){
	if(n==0) return 0;
	return digitSumRecursion(n/10) + n%10;
}

int main(){
	
	int n;
	cin>>n;
	cout<<digitSum(n)<<endl;
	cout<<digitSumRecursion(n)<<endl;
}