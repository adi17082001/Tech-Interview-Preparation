#include<bits/stdc++.h>
using namespace std;

long subarrayXor(vector<int> &arr, int k) {
        // code here
        long ct = 0;
        long xr = 0;
        map<long,long> mpp;
        mpp[xr]++;
        
        for(int i = 0; i < arr.size(); i++){
            xr = xr ^ arr[i];
            long x = xr ^ k;
            ct += mpp[x];
            mpp[xr]++;
        }
        return ct;
}

int main(){
  vector<int>arr = {4,2,2,6,4};
  int k = 6;
  cout << subarrayXor(arr,6);
}

// dry run first. 
