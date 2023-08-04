#include<bits/stdc++.h>
using namespace std;
int floorInSortedArray(vector<int>&arr, int n, int x){
    int ans = -1;
    int low = 0, high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]<=x){
            ans = arr[mid];
            low = mid + 1; 
        }else{
            high = mid - 1;
        }
    }
    return ans;
}
int main(){
    vector<int>arr = {10,20,30,40,50};
    cout<<floorInSortedArray(arr,arr.size(),25);
}
