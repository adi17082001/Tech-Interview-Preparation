#include<bits/stdc++.h>
using namespace std;

vector<int> leaders(int arr[], int n){
        // Code here
        vector<int>res;
        int curr_ldr = arr[n-1];
        res.push_back(curr_ldr);
        for(int i=n-2;i>=0;i--){
            if(curr_ldr <= arr[i]){
                curr_ldr = arr[i];
                res.push_back(curr_ldr);
            }
        }
        reverse(res.begin(), res.end());
        return res;
}

int main()){
  int arr[7] = {7,10,4,10,6,5,2};
  vector<int>ans = leaders(arr,7);
  for(auto i: ans){
    cout<<i<<" ";
  }
}

