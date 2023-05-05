class Solution {
public:
    bool isAnagram(string s, string t) {
        
       if(s.length()!= t.length()) return false;

       unordered_map<int,int>u;
       for(int i=0; i<s.length(); i++){
           u[s[i]]++;  u[t[i]]--;
       }
       for(auto i:u) 
            if(i.second) return false;
       return true;
    }
};