class Solution {
public:

    unordered_map<int,string>u={{4,"IV"},
        {9,"IX"},{40,"XL"},{90,"XC"},{400,"CD"},{900,"CM"},{1,"I"},{5,"V"},{10,"X"},
        {50,"L"},{100,"C"},{500,"D"},{1000,"M"}};

    string getExp(int x,int base){
           
       string ret2="";
       int cnt=0; x=x*base;
       while(!u[x].length()){x=x-base; ret2+=u[base];}
       return u[x]+ret2;
        
    }
    string intToRoman(int num) {
        string ans="",n2="";
        int c=1;
        while(num){
            n2+=char(num%10);
            num=num/10;
            c=c*10;
        }
        reverse(n2.begin(),n2.end()); c=c/10;
  
        for(int i=0; i<n2.length() ; i++,c=c/10){
            int y=n2[i]*c;
            if(!y)continue;
            if(u[y].length()) ans+=u[y];
            else{  ans+=getExp(int(n2[i]),c);  }
        }
        return ans;
    }
};