class Solution {
public:

    unordered_map<int,string>u={{4,"IV"},
        {9,"IX"},{40,"XL"},{90,"XC"},{400,"CD"},{900,"CM"},{1,"I"},{5,"V"},{10,"X"},
        {50,"L"},{100,"C"},{500,"D"},{1000,"M"}};

    string getExp(int x){
           
       string ret="";
       int base=(int)pow(10,(int)log10(x));
       int y=x,cnt=0;
       while(!u[x].length()){x=x-base; cnt++;}
       cout<<" BASE "<<base<<" FOR "<<y<<" REMAINS "<<x<<" c"<<cnt<<endl;
       ret+=u[x];
       while(cnt--)ret+=u[base];
       y=y-x;
       return ret;
        
    }
    string intToRoman(int num) {
        string ans="";
       
        int len=(int)log10(num)+1,pre=0;
        for(int i=0; i<len ; i++){
            int y=num-(num% (int)pow(10,len-i-1) )-pre;
            pre+=y;
            cout<<"y:"<<y<<" : "<<u[y]<<endl;
            if(u[y].length()) ans+=u[y];
            else{
                if(!y)continue;
                string g=getExp(y);
                ans+=g;
                cout<<"NF: "<<y<<" : "<<g<<endl;
            }
        }
        return ans;
    }
};