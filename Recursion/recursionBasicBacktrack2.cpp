// print from N to 1 using backtracking and rec
#include<bits/stdc++.h>
using namespace std;

void f(int i, int N){
	if(i>N){
		return;
	}
	f(i+1,N);
	cout<<i<<endl;
}
int main(){
	int n;
	cin>>n;
	f(1,n); 
}