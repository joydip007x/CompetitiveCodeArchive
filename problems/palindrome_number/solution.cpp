class Solution {
public:
    bool isPalindrome(int x) {
       
       if(x<=0) return (x==0);
       double exp= log10(x);
       long long  exp_int= (long long)exp;
       int len=exp_int+1;
       
       for(int i=0; i<len/2; i++,x=x/10){

           double raise=exp-exp_int+i;
         
           if( (int)pow(10, raise) %10 != x%10 ) return false;
       }
       return true;
    }
};