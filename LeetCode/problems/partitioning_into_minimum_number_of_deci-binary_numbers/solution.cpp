class Solution {
public:
    int minPartitions(string n) {
        int x=0,len=n.length();
        for(int i=0; i<len && x!=9;i++)x=max(x,n[i]-'0');
        return x;
    }
};