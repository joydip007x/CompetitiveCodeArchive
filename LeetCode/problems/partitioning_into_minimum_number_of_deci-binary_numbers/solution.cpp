class Solution {
public:

    int minPartitions(string n) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL); cout.tie(NULL);
        int x=0;

        for(const auto& i:n)x=max(x,i-'0');
        return x;
    }
};