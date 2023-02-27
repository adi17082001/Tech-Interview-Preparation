// print name n times using rec.
#include<bits/stdc++.h>
using namespace std;

void f(int i,int n){
	if(i>n){
		return;  // base case
	}
	cout<<"Aditya"<<endl;
	f(i+1,n);
}

int main(){
	int n;
	cin>>n;
	f(1,n);


// T.C - O(N)
// S.C - O(N)