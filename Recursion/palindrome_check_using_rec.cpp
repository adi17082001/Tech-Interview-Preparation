// check if a string is a palindrome using Recursion
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int i ){
	int n = s.size();
	if(i>=n/2) return true;
	if(s[i] != s[n-i-1]) return false;
	return isPalindrome(s, i+1);
}

int main(){
	string s;
	cin>>s;
	cout<<isPalindrome(s,0);
}
