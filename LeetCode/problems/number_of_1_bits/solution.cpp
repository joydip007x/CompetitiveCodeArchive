class Solution {
public:
    int hammingWeight(uint32_t n) {
        int c=0;
        while(n){
            c+=(n%2);
            n=n>>1;
        }
        return c;
    }
};