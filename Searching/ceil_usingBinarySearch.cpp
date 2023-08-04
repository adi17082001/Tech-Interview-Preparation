#include<bits/stdc++.h>
using namespace std;
int ceilingInSortedArray(vector<int>&arr, int n, int x){  
    int ans = -1;

    // Initial range of search
    int l = 0, h = n-1;
    while(l <= h){

        int mid = (l + h) / 2;

        // Array element at Mid is greater than x.
        if(arr[mid] >= x){
            ans = arr[mid];

            // We reduce search space to left half.
            h = mid - 1;
        }
        else{

            // We reduce search space to right half.
            l = mid + 1;
        }
    }
    return ans;
}
int main(){
    vector<int>arr = {10,20,30,40,50};
    cout<<ceilingInSortedArray(5,25,arr);
}
