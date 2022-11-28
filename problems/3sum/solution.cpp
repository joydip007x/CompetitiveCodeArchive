class Solution {
public:
     vector<int> twoSum(vector<int>& nums, int target,int ii, unordered_multiset <int>&s) {
       
        auto it=s.find(nums[ii]);
        s.erase(it);
        map<pair<int,int>,bool>u;
        unordered_multiset <int>::iterator i;
        vector<int>rr;
        for(i=s.begin(); i!=s.end();i++){
            auto j=s.find(target-*i);
            if(j==s.end() || i==j )continue;
            if( u[make_pair(*i,*j)] || u[make_pair(*j,*i)]) continue;
            rr.push_back(*i);
            rr.push_back(*j);
            u[make_pair(*i,*j)]=u[make_pair(*j,*i)]=1;
            
        }
        return rr;
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>>ans;
        set<multiset<int>>sans;
        unordered_multiset <int>s(nums.begin(),nums.end());
        if(!nums.size()) return ans;
        for(int i=0;i<nums.size();i++){
             
              vector<int>a=twoSum(nums,-1*nums[i],i,s);
              if(a.size()>1){
                 for(int p=1;p<a.size();p=p+2){ 
                    auto k=sans.insert(multiset<int>{a[p-1],a[p],nums[i]});
                    if(k.second)ans.push_back(vector<int>{a[p-1],a[p],nums[i]});
                 }
              }
              s.insert(nums[i]);
        }

        return ans;
    }
};