class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp=0,b=-1;
        for(auto i:prices){
            if(b==-1){b=i;continue;}
            maxp=max(maxp,i-b);
            b=min(b,i);
        }

        return max(maxp,0);
    }
};