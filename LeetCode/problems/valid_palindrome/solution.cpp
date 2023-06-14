class Solution {
public:

    bool palinCheck(int i,int j,string &s){

        ///cout<<s[i]<<" : "<<s[j]<<" pos ("<<i<<","<<j<<" )"<<endl;
        if((j-i)<=1)    return (isalnum(s[i])&&isalnum(s[j])) ? s[i]==s[j]:true;
        if(!isalnum(s[i])) return  palinCheck(i+1,j,s);
        if(!isalnum(s[j])) return  palinCheck(i,j-1,s);
        if(s[i]==s[j]) return palinCheck(i+1,j-1,s);
        return false;
    }
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        return palinCheck(0,s.length()-1,s);
    }
};