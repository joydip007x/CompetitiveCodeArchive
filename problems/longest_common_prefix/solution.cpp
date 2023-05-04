#include <algorithm>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       
        int mini=0,flag=0;
        unordered_set<int>s;

        for(int i=0; i<201 ; i++){
            s.clear();
            for(int j=0;j<strs.size();j++){
                if(strs[j].length()<i+1){
                    mini=i;  
                    flag=1;  
                    break;
                }
                s.insert( strs[j][i]);
            }
            if(flag)break;
            if(s.size()!=1) { mini=i; break;}
        }
        return strs[0].substr(0,mini);
    }
};