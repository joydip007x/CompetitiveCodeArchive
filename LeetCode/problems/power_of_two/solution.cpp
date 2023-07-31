class Solution {
public:
    bool isPowerOfTwo(int n) {
        //https://www.geeksforgeeks.org/count-set-bits-in-an-integer/
        unsigned long long x=n;
        x= (n==0) | x&(x-1);
        return !x;
    }
};