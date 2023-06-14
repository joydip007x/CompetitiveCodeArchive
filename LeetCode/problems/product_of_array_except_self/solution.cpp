#define pb push_back
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans1,ans2;
        int x=1,y=1;
        ans1.pb(1);ans2.pb(1);
        for(int i=0,j=nums.size()-1; i<nums.size()-1 && j!=0; i++,j--){
             x=x*nums[i];
             y=y*nums[j];
             ans1.pb(x);
             ans2.pb(y);
        }
        
        for(int i=0;i<ans1.size();i++)ans1[i]*=ans2[ans2.size()-1-i];
        return ans1;
    }
};