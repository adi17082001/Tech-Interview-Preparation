#include<bits/stdc++.h>
using namespace std;

int longestCommonSubstring(string x, string y, int m, int n){
	int t[m+1][n+1];

	// initialization
	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			if(i==0 || j==0){
				t[i][j] = 0;
			}
		}
	}
	// choice diagram and also, keep count of the max length of substring 
	int max = 0;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(x[i-1] == y[j-1]){
				t[i][j] = t[i-1][j-1] + 1 ;
			}
			else{
				t[i][j] = 0;
			}
			if(t[i][j]>max){
				max = t[i][j];
			}
		}
	}
	return max;
}






int main(){
	string x,y;
	cin>>x;
	cin>>y;
	int m = x.length();
	int n = y.length();
	cout<<longestCommonSubstring(x,y,m,n);
}