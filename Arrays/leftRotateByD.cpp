#include<bits/stdc++.h>
using namespace std;
void reverseArray(int arr[], int n, int low, int high){
    while(low<high){
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}
void leftRotate(int arr[], int n, int d){
    reverseArray(arr,n,0,d-1);
    reverseArray(arr,n,d,n-1);
    reverseArray(arr,n,0,n-1);
}

int main(){
    int arr[5] = {1,2,3,4,5};
    leftRotate(arr,5,2);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}
