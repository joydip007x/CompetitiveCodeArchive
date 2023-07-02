class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int ans=0,stage=-1,cnt=0;
        for(int i=0; i<nums.size(); i++ ){
            
            ans=max(ans,cnt);
            
            if(nums[i]>threshold){ 
                    ans=max(ans,cnt);
                    stage=-1;
                    cnt=0;continue;
            }
            if(stage==-1 && nums[i]%2==0 ){cnt++; stage=0; continue; }
            if(stage==0){ //Search-Odd
                if(nums[i]%2==1){cnt++; stage=1; }
                else{
                    ans=max(ans,cnt);
                    cnt=1;
                }
                continue;
            }
            if(stage==1){ //Se-even
                if(nums[i]%2==0){
                    cnt++;stage=0;
                }
                else{
                    ans=max(ans,cnt);
                    stage=-1;
                    cnt=0;
                }
                continue;
            }
            
        }
        return max(ans,cnt);
    }
};