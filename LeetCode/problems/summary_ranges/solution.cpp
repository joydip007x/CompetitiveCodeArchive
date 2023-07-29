class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        int len=nums.size();
        if(!len) return {};
        int prev=nums[0],start=nums[0],ends=nums[0];
        vector<string>v;
        string s="";
        for(int i=1; i<len;i++){
            if(nums[i]==prev+1){
                ends=nums[i];
                prev=nums[i];
            }
            else{
                s=to_string(start);
                if(start!=ends)
                     s+="->"+to_string(ends);
                v.push_back(s);
                s="";
                ends=prev=start=nums[i];
            }
        }
        s=to_string(start);
        if(start!=ends)
           s+="->"+to_string(ends);
        v.push_back(s);
        return v;
    }
};