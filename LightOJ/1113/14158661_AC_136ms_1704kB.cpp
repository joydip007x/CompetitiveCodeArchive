#include<algorithm>
#include<stack>
#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#define pb push
using namespace std;
int main()
{
    int t_case,mcase=0;
    scanf("%d",&t_case);
    while(t_case!=0)
    {
          int fault=0;
        stack<string> fwd;stack<string> bkd;
        string dest;string current="http://www.lightoj.com/";
       cout<<"Case "<<++mcase<<":"<<endl;
       while(cin>>dest && dest!="QUIT")
        {

            if(dest=="VISIT")
            {
                bkd.pb(current);
                cin>>current;
                fwd= stack<string> ();
            }
            if(dest=="FORWARD")
            {
                if(fwd.empty()){fault=1;}
                else{bkd.pb(current);current=fwd.top();fwd.pop();}
            }
            if(dest=="BACK")
            {
                if (bkd.empty()){fault=1;}
                else
                    {
                        fwd.pb(current);
                        current=bkd.top();
                        bkd.pop();
                    }
            }
            if(fault==0){cout<<current<<endl;}
            else {cout<<"Ignored"<<endl;}
            fault=0;

        }
        t_case-=1;
    }
}

