class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int cnt=0;
        while( !isalpha((s.back())) ){s.pop_back();}
        while( isalpha((s.back())) ){s.pop_back(); cnt++;}

        return cnt;
    }
};