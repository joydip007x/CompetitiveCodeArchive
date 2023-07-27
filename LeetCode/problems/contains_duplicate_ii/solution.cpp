class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        map<int,vector<int>>m;
        int len=nums.size();
        for(int i=0;i<len; i++) m[nums[i]].push_back(i);
        
        for(const auto& i:m ){
           // cout<<" i.first "<<i.first<<" :: ";
            vector<int>v=i.second;
          //  for(auto h:v)cout<<h<<",";cout<<endl;
            int len=v.size();
            for(int hh=0; hh<len; hh++){
              auto  g= upper_bound(v.begin(),v.end(),v[hh]+k);
              g=prev(g);
              if( *g!=v[hh] && abs(*g-v[hh])<=k) return true;
            }
          
            //cout<<*(prev(g))<<" :\n";

        }
        return false;
    }
};