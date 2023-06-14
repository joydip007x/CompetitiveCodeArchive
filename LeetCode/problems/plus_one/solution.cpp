class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=0;
        for(int i=digits.size()-1; i>=0 && carry!=-1; i--){
            int x=digits[i];
            if(i==digits.size()-1)x=x+1; 
            else x=x+carry;
            if(x<=9){ digits[i]=x;return digits;}
            digits[i]=x%10;
            carry=x/10;
        
        }
        if(carry>0)digits.insert(digits.begin(),carry);
        return digits;
    }
};