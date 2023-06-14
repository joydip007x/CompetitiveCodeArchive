class Solution {
public:
    string addBinary(string a, string b) {

        if(a.length()!=b.length()){
            if(a.length()<b.length())swap(a,b);
            reverse(b.begin(),b.end());
            while(b.length()!=a.length())b+='0';
            reverse(b.begin(),b.end());
        }
       
        string res="";
        int carry=0;
        for(int i=a.length()-1; i>=0; i--){
           
            int x=a[i]-48;
            int y=b[i]-48;
            if(x && y){
                if(carry){x=1;}
                else {x=0;carry=1;}
            }
            else{
                x=x+y;
                if(carry && x){x=0;}
                else if(carry && !x){x=1;carry=0;}
            }
         
            res.push_back((x+48));
        }
    if(carry)res.push_back('1');
    reverse(res.begin(),res.end());
    return res;
    }
};