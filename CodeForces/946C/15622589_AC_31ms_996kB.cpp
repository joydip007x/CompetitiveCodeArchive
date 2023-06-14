#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
char s[1000000],alp[100];
#define sz 100000
#define LOOP(i,L,U) for(int i=(int)L;i<U;i++)
#define LOOPeq(i,L,U) for(int i=(int)L;i<=U;i++)
int main()
{   
    int i,j,_start,flag=0;


    for(i=0;i<25;i++)
    {
        alp[i]=i+98;
        ///cout<<"alp["<<i<<"]"<<alp[i]<<endl;
    }
    gets(s);
//    cout<<"Length:- "<<strlen(s)<<endl;
//    cout<<"elemento-"<<alp[24]<<endl;
    for(i=0;i<strlen(s);i++)
    {
        if (s[i]==97)
            {
                _start=i;
//                cout<<"Position of A-  "<<i<<endl;
                break;
        }
    }
    for(j=_start+1,i=0;j<strlen(s);j++)
    {
        if(s[j]<alp[i])
            {
//                cout<<"Replaced  *"<<s[j]<<"*  wiTh  *"<<alp[i]<<endl;
                s[j]=alp[i];i++;
            }
         if(s[j]==alp[i])
         {
             i++;
//              cout<<" NOT~Replaced  *"<<s[j]<<"*  wiTh  *"<<alp[i]<<endl;
         }
//            cout<<"LOOP RUNNED|| "<<j<<" || times"<<endl;
//            cout<<"Now ALP is  <>  "<<i<<"<>"<<endl;
    }
            for(int k=97,j=0;j<strlen(s);j++)
            {
                if(s[j]==k)

                {
                    flag++;k++;
                }
            }
    if(flag>=26)cout<<s;
    else cout<<"-1";
}