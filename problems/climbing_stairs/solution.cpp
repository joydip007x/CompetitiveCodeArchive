class Solution {
public:
    int dp[50];
    int climbStairs(int n) {
        if(n<=2)return n;
        for(int i=0;i<50;i++)dp[i]=-1;
        return countStair(n);
    }
    int countStair(int n){
        if(n<=2) return n;
        return dp[n]!=-1 ? dp[n]:dp[n]=countStair(n-1)+countStair(n-2);
    }
};