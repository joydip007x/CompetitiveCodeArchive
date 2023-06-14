class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        const int N=nums.size();
        unordered_map<int,int>u;
        vector<int> ans;
        vector<int> v[100001] ;
        int cnt=-1;
        for(auto i:nums){
           u[i]++;
           cnt=max(cnt,u[i]);
        }
        for(auto i:u){
             v[i.second].push_back(i.first);
        }
        for(int i=cnt; i>=1 && k>0; i--){

            if(k-v[i].size()>=0){
                ans.insert(ans.end(),v[i].begin(),v[i].end());
                k=k-v[i].size();
            }
            else{
                for(auto j:v[i]){
                    if(!k)break;
                    --k;
                    ans.push_back(j);
                }
            }
        }
        return ans;//vector<int>{3,3};
    }
};