class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_multiset <int> s(nums.begin(),nums.end());
        unordered_multiset <int>::iterator i;
        for(i=s.begin(); i!=s.end();i++){
            auto j=s.find(target-*i);
            if(j==s.end())continue;
            if( *i!=*j){

                return vector<int>{
                    (int)(find(nums.begin(),nums.end(),*i)-nums.begin()),
                    (int)(find(nums.begin(),nums.end(),*j)-nums.begin())
                };
             }
            if( i!=j && *i==*j){
                
                return vector<int>{
                    (int)(find(nums.begin(),nums.end(),*i)-nums.begin()),
                    (int)(nums.size()-1)-(int)(find(nums.rbegin(),nums.rend(),*j)-nums.rbegin())
                };
            }

        }
        return vector<int> {0,1};
    }
};