class Solution {
public:
    int addDigits(int num) {
        
        int x=0;
        while(1){
            while(num){
                x+=(num%10);
                num=num/10;
            }
            if(x<10)break;
            num=x;
            x=0;
        }
        return x;
    }
};