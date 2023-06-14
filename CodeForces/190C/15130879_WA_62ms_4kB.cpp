/// Never Give UP ///
/*                                  *
 *    author-joydip007x             *
 *            *                     *
 *    its_simple_i_win              *
 *                                  */
///*	 Never tired :)	:V	*///
///     Date^>XX/08/2018		*///

#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
#define LOOP(i,L,U) for(int i=(int)L;i<U;i++)
#define LOOPeq(i,L,U) for(int i=(int)L;i<=U;i++)
#define flagg int flag=-1,i=0,j=0,k=0
#include<map>
#define pb push_back
#define pii pair<int , int >
#define sz 100000
int main()
{
    flagg;
    string x,y,p,w;
    x="pair<int,int>";
    y="int";
    p="pair";
    w="pair";
    int swapp=0;
    map<string , int >m;
    map<string, int >::iterator it;
    string s;k;
    cin>>k;
    while (i!=k){
        cin>>s;
        if(s=="int"){i++;}
        if( s!=w ) {swapp++;w="int";}
        m[s]++;
    }
  it=m.begin(); int kint=it->second; it++; int kpair=it->second;
  if(kpair+1==kint){flag=0;}
  else flag=1;
  if(swapp==1 && flag==0 )
  {
            if(kint<=3 &&  flag==0 )
    {
       /// cout<<flag<<endl;
        if(kint==3){cout<<"pair<pair<int,int>,int>";}
         if(kint==2){cout<<"pair<int,int>";}
    }
      ///cout<<":::::::::::::::::::::::"<<swapp<<'\n';
      else
      {for(i=0;i<kpair-1;i++){cout<<p<<"<";}
      cout<<x;
      for(i=0;i<kint-2;i++){cout<<","<<y<<">";}
      }
  }
  if(swapp>1 && flag==0)
    {
        if(kint<=3 &&  flag==0 )
    {

        if(kint==3){cout<<"pair<pair<int,int>,int>";}
         if(kint==2){cout<<"pair<int,int>";}
    }
   if(kint>3 && flag==0)
  {
      if(kpair%2==0)
        {
             for(i=0;i<(kpair/2);i++)
             {cout<<p<<"<";}
             cout<<x;
             for(i=0;i<(kpair/2)-1;i++)
             {cout<<","<<x<<">";}
             cout<<","<<y<<">";
        }
      if(kpair%2==1)
      {
            for(i=0;i<kpair/2;i++)
            {cout<<p<<"<";}
            cout<<x;
            for(i=0;i<(kpair-1)/2;i++)
            {cout<<","<<x<<">";}
         }
     }
    }
  if(flag==1) cout<<"Error occurred";

}