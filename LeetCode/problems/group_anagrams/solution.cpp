class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       
            unordered_map<string,vector<string>>us;
            vector<vector<string>>ans;
            for(auto i:strs){
                string p=i;
                sort(p.begin(),p.end());
                us[p].push_back(i);
            }
            for(auto i:us)ans.push_back(i.second);
            return ans;
        }
};