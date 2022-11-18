class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int sum ,i=0 ,j=numbers.size()-1 ;
        for( ;  ;  ){
            sum= numbers[i]+numbers[j];
            if(sum==target)return {i+1,j+1};
            (sum<target) ? i++:j--;
        }
    }
};