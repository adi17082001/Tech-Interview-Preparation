//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool isPrime(int n){
        if(n<=1) return false;
        if(n<=3) return true;
        if(n%2==0 || n%3==0) return false;
        for(int i=5;i*i<=n;i=i+6){
            if(n%i==0 || n%(i+2)==0){
                return false;
            }
        }
        return true;
    }
    int hasThreePrimeFac(long long N) {
        // code here
        int sq = (int)sqrt(N);
        if(1LL * sq * sq != N){
            return 0;
        }
        return isPrime(sq)? 1: 0;
    }
};

