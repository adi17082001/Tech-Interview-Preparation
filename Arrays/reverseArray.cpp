#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int n){
  int low = 0, high = n-1;
  while(low<high){
    int temp = arr[low];
    arr[low] = arr[high];
    arr[high] = temp;
    low++;
    high--;
  }
}

void reverseUsingRecursion(int arr[], int low, int high){
  if (low >= high) return; // base condition
  swap(arr[low], arr[high]);
  reverseUsingRecursion(arr, low + 1, high - 1);
}

int main(){
  int arr[5] = {1,2,3,4,5};
  reverseArray(arr,5);
  for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
  }
}
