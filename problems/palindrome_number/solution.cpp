class Solution {
public:
    bool isPalindrome(int x) {
       
       if(x<=0) return (x==0);
       double exp= log10(x);
       int exp_int=(int)exp;
       int len=(exp_int+1)/2;

       for(int i=0; i<len; i++,x=x/10)
           if( (int)pow(10, double(exp-exp_int+i)) %10 != x%10 ) 
                 return false;
       return true;
    }
};