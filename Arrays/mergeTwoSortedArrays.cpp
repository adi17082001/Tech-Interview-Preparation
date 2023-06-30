#include<bits/stdc++.h>
using namespace std;

vector<int>merge(vector<int>&a, vector<int>&b){
    int m = a.size();
    int n = b.size();
    vector<int>c(m+n);

    int i=0, j=0, k=0;
    while(i<m && j<n){
        if(a[i]<b[j]){
            c[k] = a[i];
            k++;
            i++;
        }
        else{
            c[k] = b[j];
            k++;
            j++;
        }
    }
    while(i<m){
        c[k] = a[i];
        k++;
        i++;
    }
    while(j<n){
        c[k] = b[j];
        k++;
        j++;
    }
    return c;
}

int main(){
    vector<int>a = {1,3,5,7,9};
    vector<int>b = {2,4,6,8,10};
    vector<int>res = merge(a,b);
    for(auto i: res){
        cout<<i<<" ";
    }
}
