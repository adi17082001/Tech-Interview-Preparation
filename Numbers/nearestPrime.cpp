#include<bits/stdc++.h>
using namespace std;



bool isPrime(int n){
	bool is_prime = true;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			is_prime = false;
			break;
		}
	}
	return is_prime;
}

// void nearestPrime(int n){
// 	int a,b;
// 	int n1 = n, n2 = n;
// 	if(n1<=1) a= -1;
// 	else{
// 		n1++;
// 		while(!isPrime(n1)&&(n1>=2))n++;
// 		a = n1;
// 	}
// 	if(n2<=1) b= -1;
// 	else{
// 		n2--;
// 		while(!isPrime(n2)&& (n2>=2)) n2--;
// 		b = n2;
// 	}
// 	if(n-b==a-n){
// 		cout<<a<<" "<<b;
// 	}	
// 	else if(n-b>a-n){ 
// 		cout<<a;
// 	}	
// 	else{
// 		cout<<b;
// 	}
// }


void nearestPrime(int n){
	if(n==1) cout<<2;
	else if(n==2) cout<<2<<" "<<3;

	else if(n>=3){
		//below
		int i=1;
		while(true){
			if(isPrime(n-i))break;
			i++;
		}

		//above n
		int j =1;
		while(true){
			if(isPrime(n+j)) break;
			j++;
		}

		if(i<j) cout<<n-i;
		else if(i==j) cout<<n-i<<" "<<n+j;
		else{
			cout<< n+j;
		}
	}
}


int main(){
	int n = 3;
	nearestPrime(2);
}
