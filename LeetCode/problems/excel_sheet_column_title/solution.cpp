class Solution {
public:
    string convertToTitle(int columnNumber) {
        
        long len=0,lmt=1,x=columnNumber,sum=0;
        string s="";
        while(x>sum){
            lmt=lmt*26;
            sum+=lmt;
            len++;
        }
        x=x-sum+lmt;
        for( ; x>0 && lmt>1; ){
            lmt=lmt/26;
            int y=lmt,val=1;
            while((x-(lmt*val))>0) val++; 
            val--;
            s.push_back(char('A')+val);
            x=x-(lmt*val);
        }
        return s;
    }
};