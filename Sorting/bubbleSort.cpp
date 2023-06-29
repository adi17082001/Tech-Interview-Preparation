#include<bits/stdc++.h>
using namespace std;

void bubblesort(vector<int> &A){
    int n = A.size();
    int temp =  0;
    int isSorted = 0;
    for(int i = 0; i<n-1;i++){
        isSorted = 1;
        for(int j = 0; j< n-1-i;j++){
            if(A[j]>A[j+1]){
                swap(A[j], A[j+1]);
                isSorted = 0;
            }
        }
        if(isSorted){
            return;
        }
    }

}


int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bubblesort(a);
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}