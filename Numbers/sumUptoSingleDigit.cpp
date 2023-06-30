// calculate sum of all the digits of the num until you get a single digit.
// eg - 9123
// 9+1+2+3 = 15
// 1+5 = 6
// o/p: 6

#include<bits/stdc++.h>
using namespace std;

int allsum(int n){
    int sum = 0;
    while(n>0){
        int ld = n%10;
        sum += ld;
        n/=10;
    }
    return sum;
}

int singleDigSum(int n){
    int slow = allsum(n);
    int fast = allsum(allsum(n));
    while(slow!=fast){
        slow = allsum(slow);
        fast = allsum(allsum(fast));
    }
    return slow;
}

int main(){
    int n = 9123;
    cout<<singleDigSum(n);    
}
