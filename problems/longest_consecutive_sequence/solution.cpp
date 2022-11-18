class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         map<int,bool>m;
         map<int,bool>::iterator i;
         for(auto i:nums)m[i]=true;

         int ans=0,cnt=0;
         for(i=m.begin(); i!=m.end() ;i++){
             
             if(m[(i->first-1)])cnt++;
             else cnt=1;
             ans=max(ans,cnt);
         }
         return ans;
    }
};