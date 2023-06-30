class Solution {
public:
    int minPartitions(string n) {
        int x=0;
        for(auto i:n)x=max(x,i-'0');
        return x;
    }
};