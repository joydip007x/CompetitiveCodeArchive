class Solution {
public:
    int romanToInt(string s) {
        
        unordered_map<char,int>u={ {'I',1},
            {'V',5},{'X',10},{'L',50},
            {'C',100},{'D',500},{'M',1000},
        };
        int len=s.length(), ans=0,val;
        for(int i=0 ;i<len ;i++){

            val=u[s[i]];
            if(i+1<len && val<u[s[i+1]]){
                ans-=val;
            }
            else ans+=val;
        }
        return ans;
    }
};