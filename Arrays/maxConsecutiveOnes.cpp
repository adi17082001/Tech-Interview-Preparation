#include<bits/stc++.h>
using namespace std;

int maxConsecutiveOnes(int arr[], int n){
  int res = 0;
  for(int i=0;i<n;i++){
    if(arr[i]==0){
      curr = 0;
    }else{
      curr++;
      res = max(res,curr);
    }
  }
  return res;
}
int main(){
  int arr[6] = {0,1,0,1,1,1};
  cout<<maxConsecutiveOnes(arr,6);
}
