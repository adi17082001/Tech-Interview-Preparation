#include <bits/stdc++.h>
using namespace std;

int remDups(int arr[], int n){
  int res = 1;
  for(int i=1;i<n;i++){
    if(arr[i] != arr[res-1]){
      arr[res] = arr[i];
      res++;
    }
  }
  return res;
}

int main(){
  int arr[5] = {10,20,20,30,30};
  int res = remDups(arr,5);
  for(int i=0;i<res;i++){
    cout<<arr[i]<<" ";
  }
}
