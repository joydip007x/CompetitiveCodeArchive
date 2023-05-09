class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int len=nums.size();
        if(len==1) return len;
        int ans=1,i=1,j=1;

        for(  ;  j<len ; ){

            if(nums[i-1]<nums[j]){
                swap(nums[i],nums[j]);
                i++;
                ans++;
                j=i;
            }
            else{
                j++;
            }
        }
        return ans;
    }
};