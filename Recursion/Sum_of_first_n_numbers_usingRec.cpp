// sum of the first 'n' numbers using rec
#include<bits/stdc++.h>
using namespace std;

// parameterized function
void f(int i, int sum){
	if(i<1){
		cout<<sum<<endl;
		return;
	}
	f(i-1,sum+i);
}
//functional (We use these types of functions to return a particular value)
int sumOfFirstN(int n){
	if(n==0){
		return 0;
	}
	return (n+sumOfFirstN(n-1));
}

int main(){
	int n;
	cin>>n;
	cout<<sumOfFirstN(5);
}