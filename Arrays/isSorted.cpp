#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n){
  for(int i=0;i<n;i++){
    if(arr[i] < arr[i-1]){
      return false;
    }
    return true;
}
int main(){
  int arr[5] = {2,1,3,4,5};
  cout<<isSorted(arr,5);
}
