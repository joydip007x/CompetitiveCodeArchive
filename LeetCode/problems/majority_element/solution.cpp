class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>u;
        int mx=0;
        for(const auto& i:nums){
            u[i]++;
            if(u[i]>u[mx])mx=i;
        }
        return mx;
    }
};