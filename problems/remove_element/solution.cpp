class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cnt=0;
        for(int i=0; i<nums.size();i++){

            if(nums[i] == val){
                int j=i;
                while(j<nums.size() && nums[j]==val)j++;
                if(j<nums.size()){
                    swap(nums[i],nums[j]);
                    cnt++;
                }
            }else cnt++;
        }
        nums.resize(cnt);
        return cnt;
    }
};