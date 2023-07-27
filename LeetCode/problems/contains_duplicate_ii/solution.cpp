class Solution
{
  public:
    bool containsNearbyDuplicate(vector<int>& nums, int k)
    {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);
        const int n = nums.size();
        vector <pair<int, int>> numsP;
        for (int i = 0; i < n; ++i) numsP.emplace_back(nums[i], i);
        try
        {
            sort(numsP.begin(), numsP.end(), [&] (const auto &l, const auto &r)
            {
                if (l.first == r.first && abs(l.second - r.second) <= k) throw exception();
                else return (l.first == r.first) ? (l.second < r.second) : (l.first < r.first);
            } );
        }
        catch (...) { return true; }
        return false;
    }
};