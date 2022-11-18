class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int sum;
        for(int i=0 ,j=numbers.size()-1 ; i<numbers.size() ;  ){
            sum= numbers[i]+numbers[j];
            if(sum==target)return vector<int>{i+1,j+1};
            (sum<target) ? i++:j--;
        }
        return vector<int>{0,1};
    }
};