// print from n to 1 using rec.
#include<bits/stdc++.h>
using namespace std;

void f(int i, int N){
	if(N<i){
		return;
	}
	cout<<N<<endl;
	f(i,N-1);
}
int main(){
	int n;
	cin>>n;
	f(1,n);
}