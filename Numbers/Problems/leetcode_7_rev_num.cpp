//Given a signed 32-bit integer x, return x with its digits reversed. 
//If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

//Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
// INT_MAX = 2147483647 (2^32-1) for 32-bit integers
// INT_MIN = –2147483648  -(2^32) for 32-bit integers
class Solution {
public:
    int reverse(int x) {
        long rev_num = 0;
        while(x!=0){
            long ld = x%10;
            rev_num = rev_num * 10 + ld;
            x /=10;
        }
        return (ans<INT_MIN || ans > INT_MAX ? 0: rev_num);
    }
};
