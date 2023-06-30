class Solution {
public:
    int minPartitions(string n) {
        int x=0;
        for(const auto& i:n)x=max(x,i-'0');
        return x;
    }
};