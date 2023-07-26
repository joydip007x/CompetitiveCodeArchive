class Solution {
public:
    bool isIsomorphic(string s, string t) {

        if(s.length()!= t.length() ) return false;
        unordered_map<short int,short int>u1,u2;
        
        for(int i=0;i<s.length();i++){

             if( ( u1[s[i]] && u1[s[i]]!=t[i] ) || ( u2[t[i]] && u2[t[i]]!=s[i] ) ) 
              return false;
    
             u1[s[i]] =t[i];
             u2[t[i]] =s[i];
        }
        return true;
    }
};