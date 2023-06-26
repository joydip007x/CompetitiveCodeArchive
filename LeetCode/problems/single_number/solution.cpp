class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>u;
        int ans=0;
        for(auto i:nums)u[i]++; 
        for(auto i:u){if(i.second==1)ans=i.first;}
        return ans;
        
    }
};