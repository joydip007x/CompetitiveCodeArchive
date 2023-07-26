class Solution {
public:
    bool isIsomorphic(string s, string t) {

        if(s.length()!= t.length() ) return false;
        unordered_map<int,int>u1,u2;
        int ind1=0,ind2=0;
        for(int i=0;i<s.length();i++){

             if( ( u1.find(s[i])!=u1.end() && u1[s[i]]!=t[i] )
              ||  ( u2.find(t[i])!=u2.end() && u2[t[i]]!=s[i] ) ) 
              return false;
    
             u1[s[i]] =t[i];
             u2[t[i]]  =s[i];
        }
        return true;
    }
};