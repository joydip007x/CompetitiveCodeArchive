class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        return binarySearch(nums,0, nums.size()-1,target);
    }
    int binarySearch(vector<int>&arr, int l, int r, int x)
    {
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (arr[m] == x) return m;
            if (arr[m] < x) l = m + 1;
            else r = m - 1;
        }
        return l;
    }
 
};